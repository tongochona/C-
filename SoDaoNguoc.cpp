#include <iostream>
#include <math.h>
using namespace std;
//nhap vào 1 số nguyên dương, in số đảo ngược
int main(){
  unsigned long a;
  int z;
  cin>>a;
  if(a<0) {
    cout<<"vui long nhap so nguyen duong!";
    return -1;
    }
  while(a!=0){
    z=a%10;
    a=a/10;
    cout<<z;
  }
  return 0;
}
