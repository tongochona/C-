
// To Ngoc Hoan  106210213


#include <iostream>
using namespace std;
void nhap(int &n, int a[]){
  cout<<"Enter n: ";
  cin>>n;
  for(int i=0; i<20; i++){
    a[i]=2*n*i+1;
  }
}
int tong(int &s, int a[20]){
  for(int i=0; i<20; i++){
    s+=a[i];
  }
    return s;
}
int main(){
  int n, s=0, a[20];
  lai :
  nhap(n, a);
  if(n<0) {
    cout<<"Nhap lai!"<<endl;
    goto lai;
  }
  cout<<"tong cua ham la: "<<tong(s,a)<<endl;
}
