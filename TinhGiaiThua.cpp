#include <iostream>

using namespace std;

int main(){
  int n, i, giaithua;
  i=1; giaithua=1;
  cout<<"nhap n: ";
  cin>>n;
  while (i<=n){
    giaithua*=i;
    i++;
  }
  cout<<"ket qua: "<<giaithua;
  return 0;
}
