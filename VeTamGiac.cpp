#include "iostream"

using namespace std;

int main(){
  int a, i, b;
  cin>>a;
  b=a;
  for (int i=1; i<=a; i++){
    for(int i=1; i<=b;i++){
      cout<<"*";
    }
    cout<<endl;
    b-=1;
  }
  return 0;
}
