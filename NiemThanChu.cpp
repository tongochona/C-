#include <iostream>

using namespace std;

int main(){
  int n, i;
  string tc;
//char tc[50];
//cin.getline(tc,50)

  cout<< "cau than chu: ";
  //cin.ignore();
  //fflush(stdin);
  getline (cin,tc);
  cout<<"so lan niem than chu: ";
  cin >>n;
  for(int i=1; i<=n; i++){
    cout<<tc<<endl;
  }
  return 0;
}
