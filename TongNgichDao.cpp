#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
//  int n, i;
//  float tong;
//  tong=0; i=1;
//  cout<<"nhap n: ";
//  cin>>n;
//  while (i<=n){
//    tong+=float(1)/i;
//    i++;
//  }
//  cout<< setprecision(6)<<fixed<<"ket qua la: "<< tong;
int n, i;
float tong;
tong=0;
cout<<"nhap n: ";
cin>>n;
for (int i=1; i<=n;i++){
  tong+=float(1)/i ;
}
cout <<"ket qua la: "<<setprecision(6)<<fixed<<tong;
  return 0;
}
