//Nhập vào dãy số, in ra trung bình cộng các số nguyên tố có trong mảng
#include <iostream>
using namespace std;
// hàm kiểm tra số nguyên tố
bool soNguyenTo(int k){
  for(int i=2; i<=k/2; i++){
    if(k%i==0) return false;
  }
  return true;
}
int main(){
  int n, m=0, tong=0;
  float tb;
  cout<<"Nhap so phan tu";
  cin>> n;
  int x[n];
  cout<<"nhap tung phan tu";
  for (int i=0; i<n;i++){
    cin>>x[i];
    }
  for (int i=0; i<n; i++){
    if(soNguyenTo(x[i])){
      m++;
      tong+=x[i];

    } 
  }  
    tb=tong/float(m);
    if (tb==0) cout<<"not found";
    else cout<<tb;
}
