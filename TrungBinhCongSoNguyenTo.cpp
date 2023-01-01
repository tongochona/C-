#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, tong, x, i, j, s;
  float tb;
  cout<<"Nhap a: ";
  cin>>a;
  tong=0;
  if(a>2) {
    tong=2;
    s=1;
  }
  else s=0;
  for(i=3;i<=a;i++){
    for(j=2; j<i; j++){
      x=i%j;
      if(x==0) break;
    }
    if (i==j) {
      tong+=i;
      s++;
    }
  }
  cout<<"------------Ket qua----------------"<<endl;
  if (s==0) cout<<"Khong co so nguyen to nao be hon";
  tb=float(tong)/s;
  cout<<"Trung binh cong cac so nguyen to nho hon a la: "<<setprecision(3)<<fixed<<tb;
  return 0;
}
