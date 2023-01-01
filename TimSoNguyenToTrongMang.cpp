#include <iostream>
using namespace std;
int main(){
  int n, a, j;
  cin>>n;
  int x[n];
  for (int i=1; i<=n; i++){
    cin>> x[i];
  }
  for (int i=1; i<=n; i++){
    for( j=2;j<x[i];j++){
      a=x[i]%j;
      if (a==0) break;
    }
    if (j==x[i]) cout<<x[i]<<" ";
  }
  return 0;
}
