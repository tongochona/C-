#include <iostream>
using namespace std;
int main(){
  int a, i, j, b, x;
  b=2;
  i=2;
  cout<<"So so nguyen to dau tien: ";
  cin>>a;
  cout<<2<<"  ";
  while (b<=a){
    i++;
    for(j=2; j<i;j++){
      x=i%j;
      if (x==0) break;
    }
    if(i==j){
      cout<<i<<"  ";
      b++;
    }
  }
  return 0;
}
