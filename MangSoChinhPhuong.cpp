#include <iostream>
using namespace std;
int main(){
  int n, a;
  cin >>n;
  int x[n];
  for (int i=1; i<=n;i++){
    cin>> x[i];
  }
  for(int i=1;i<=n;i++){
    for(int j=1; j<x[i];j++){
      a=j*j;
      if (a==x[i]) cout << x[i]<<" ";
    }
  }
  return 0;
}
