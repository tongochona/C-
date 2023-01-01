#include <iostream>
using namespace std;
int mani(){
  int n, m, tb, tong, a, j;
  cin>> n;
  int x[n];
  for (int i=1; i<=n;i++){
    cin>>x[i];
    for ( j=2; j<x[i];j++){
      a=x[i]%j;
      if (a==0) break;
      }
      if(j==x[i]){
        tong+=x[i];
        m++;
      }
    }
    tb=tong/float(m);
    if (tb==0) cout<<"not found";
    else cout<<tb;
}
