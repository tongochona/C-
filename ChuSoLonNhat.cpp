#include "iostream"

using namespace std;

int main(){
  int a, m, max;
  cin>>a;
  max=a;
  while(a>9){
    m=a%10;
    a/=10;
    if (max<=m) max=m;
  }
  cout <<max;
  return 0;
}
