#include <iostream>

using namespace std;

int main(){
  int date, mounth, year;
cout <<"nhap ngay, thang, nam: ";
cin >> date >>mounth>> year;
if (date<10) cout <<0<<date;
else cout <<date;
cout <<"/";
if (mounth<10) cout <<0<<mounth;
else cout<<mounth;
cout <<"/"<< year;
  return 0;
}
