#include <iostream>
#include <math.h>
using namespace std;

int main(){
  unsigned long a;
  int i, j, z, x;
  cin>>a;
//  for (int i=9; i>0; i-=1){
//    x=a/pow(10,i);
//    if (x!=0) break;
//  }
//  for (int j=1; j<=i; j+=1){
//    z=a%10;
//    a=a/10;
//    cout<<z;
// }
  i=9,j=1;
  while (i>0){
    x=a/pow(10,i);
    if (x!=0) break;
    i-=1;
  }
  while(j<=(i+1)){
    z=a%10;
     a=a/10;
      cout<<z;
      j+=1;
  }
  return 0;
}
