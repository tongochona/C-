#include <iostream>
using namespace std;
// nhập vào dãy số, xuất ra số âm lớn nhất có trong mảng
int main(){
  int n, max;
  cout<<"So phan tu trong mang: ";
  cin >>n;
  int x[n];
  for (int i=0; i<n;i++){
    cout<<"Nhap so thu "<<i+1<<": ";
    cin>>x[i];
  }
  max =-99999999;
  for( int i=0; i<n; i++){
    if(x[i]<0) max=max>x[i]?max:x[i];
  }
  cout<<"So lon nhat trong mang la: " <<max;
  return 0;
}
