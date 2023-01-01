#include <iostream>
using namespace std;
int main(){
  int n, max;
  cout<<"So phan tu trong mang: ";
  cin >>n;
  int x[n];
  for (int i=1; i<=n;i++){
    cout<<"Nhap so thu "<<i<<": ";
    cin>>x[i];
  }
  max =x[n];
  for( int i=1; i<=n; i++){
    if(x[i]<0) max=max>x[i]?max:x[i];
  }
  cout<<"So lon nhat trong mang la: " <<max;
  return 0;
}
