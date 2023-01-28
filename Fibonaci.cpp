#include <iostream>

using namespace std;
// in ra số thứ n trong dãy fibonaci với f1=f2=1.
int main(){
  int n, fn, fn1, fn2;
  cout <<"so thu ";
  cin>>n;
  fn=fn1=fn2=1;
  if (n==1||n==2) cout <<fn;
  else{
    for(int i=3 ;i<=n; i++){
    fn=fn1+fn2;
    fn2=fn1;
    fn1=fn;
  }
  cout <<fn;
  }
  return 0;
}
