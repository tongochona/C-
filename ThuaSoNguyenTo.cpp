#include <iostream>

using namespace std;

int main(){
  int a, b, i, x;
  cin>>a;
  i=2;
  while (a!=0){
    x=a%i;
    if (x==0){
      cout<<i;
      if(i>a/2) break;
      cout<<"*";
    }
    else i++;
    if (x==0) a/=i;
  }
  return 0 ;
}
