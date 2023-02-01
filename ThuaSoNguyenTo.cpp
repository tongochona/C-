#include <iostream>

using namespace std;
//nhập vào một số, in ra tích của các thừa số nguyên tố tạo nên nó. Ví dụ 6=2*3.
int main(){
  int a, b, i, x;
  cin>>a;
  i=2;
  while (a!=1){
    x=a%i;
    if (x==0){
      cout<<i;
      //if(i>a/2) break;
      cout<<"*";
      a/=i;
    }
    else i++;
  }
  return 0 ;
}
