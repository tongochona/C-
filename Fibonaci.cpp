#include <iostream>

using namespace std;

int main(){
  int n, fn, fn1, fn2;
  cout <<"so thu ";
  cin>>n;
  fn=fn1=fn2=1;
  if (n==1||n==2) cout <<fn;
  for(int i=3 ;i<=n; i++){
  fn=fn1+fn2;
  fn2=fn1;
  fn1=fn;
  }
  cout <<fn;
  return 0;
}
