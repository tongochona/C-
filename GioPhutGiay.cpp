#include <iostream>

using namespace std;

int main(){
int sogiay, s, m, h, a;
cout <<"nhap so giay: ";
cin >>sogiay;
h=sogiay/3600 ;
sogiay=sogiay%3600;
m=sogiay/60;
s=sogiay%60;
if (h<10) cout <<0<<h;
else cout <<h;
cout <<":";
if (m<10) cout <<0<<m;
else cout<< m;
cout<<":";
cout<<s;
  return 0;
}
