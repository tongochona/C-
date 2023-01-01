#include <iostream>
using namespace std;
int main(){
  int n, max, a=1;
  cin>>n;
  int x[n];
  for (int i=1; i<=n;i++){
    cin>>x[i];
    if (i==1) max=x[1];
    a= max<x[i]?i:a;
  }
  cout<<a;
  return 0;
}
