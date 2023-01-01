#include <iostream>

using namespace std;

int main(){
  int n, i, tong;
  cin >>n;
  tong=0;
  for (int i=1; i<=n; i++){
    tong+=i;
  }
  cout<<tong;
  return 0;
}
