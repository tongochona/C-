#include <iostream>
using namespace std;
int main(){
  int a, b, i, j, m, x, y, z;
  cout<<"Nhap hai so: ";
  cin>>a>>b;
  m=a;
  for (i==a; i>=1; i-=1){
    x=a%i;
    if (x==0){
      y=b%i;
      if (y==0) break;
      }
    }
  for(j=1; j<10000; j++){
    a*=j;
    z=a%b;
    if (z==0) break;
    a=m;
  }
  cout<<"UCLL la: "<< i<<endl;
  cout<<"BCNN la: "<< a<<endl;
  return 0;
}
