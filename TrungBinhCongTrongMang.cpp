#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main(){
  int n, tong=0;
  float tb;
  cin>>n;
  int x[n];
  for(int i=1;i<=n;i++){
    cin >> x[i];
  }
  for(int i=1;i<=n;i++){
    tong+=x[i];
  }
  cout<< tong<<endl;
  tb=float(tong)/float(n);
  cout<<setprecision(2)<<fixed<<tb;
  return 0;
}
