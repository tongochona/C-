#include <iostream>
using namespace std;

float tong (float n){
  if (n<0) cout<< "So nhap vao khong hop le!"<<endl;
  else {
    if (n==0) return 1/3.00;
    else return (tong(n-1)+(2*n+1)/(2*n+3));
  }
}

int main(){
  float n;
  cout<<"Nhap n: ";
  cin>>n;
  cout<<"Ket qua: "<<tong(n)<<endl;
}
