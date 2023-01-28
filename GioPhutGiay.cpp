#include <iostream>

using namespace std;
//Nhập vào số giây quy đổi thành ngày, giờ, phút, giây
int main(){
int sogiay, second, minute, hour, day;
cout <<"nhap so giay: ";
cin >>sogiay;
hour=sogiay/3600 ;
sogiay=sogiay%3600;
minute=sogiay/60;
second=sogiay%60;
day=hour/24;
hour=hour%24;
cout<<day<<"d"<<":"<<hour<<"h"<<":"<<minute<<"m"<<":"<<second<<"s"<<endl;
  return 0;
}
