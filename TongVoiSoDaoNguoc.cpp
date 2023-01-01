#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int  a, b, x, i;
  float songuoc;
  cin>>a;
  i=-1;
  b=a;
  songuoc=0;
  while (a!=0){
    a/=10;
    i++;
  }
  a=b;
  for (;i>=0;){
    x=a%10;
    a=a/10;
    songuoc+=(pow(10,i)*x);
    i-=1;
  }
  cout << b+songuoc;
  return 0;
}
