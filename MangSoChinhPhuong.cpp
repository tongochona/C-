#include <iostream>
#include<cmath>
using namespace std;
//nhập vào dãy số, xuất ra số chính phương
int main(){
  int n, a;
  cin >>n;
  int x[n];
  for (int i=0; i<n;i++){
    cin>> x[i];
  }
  for(int i=0;i<n;i++){
    for(int j=1; j<=sqrt(x[i]);j++){
      a=j*j;
      if (a==x[i]) cout << x[i]<<" ";
    }
  }
  return 0;
}
