#include <iostream>

using namespace std;

int main(){
  int i, j, d, r;
  cout <<"nhap chieu dai, chieu rong: ";
  cin >>d>>r;
  for(int i=1; i<=r;i++){
    for(int i=1; i<=d; i++){
      cout <<"*";
    }
    cout<<""<<endl;
  }
return 0;
}
