#include <iostream>

using namespace std;

void nhap(int &date, int &mounth, int &year){
  cout <<"nhap ngay, thang, nam: ";
cin >> date >>mounth>> year;
}
int main(){
  int date, mounth, year;
  nhaplai:
  nhap(date, mounth, year);
  if(date<1||date>31||mounth<1||mounth>12) {
    cout<<"ngay ko hop le, vui long nhap lai! " ;
    goto nhaplai;
    }
  if (date<10) cout <<0<<date;
  else cout <<date;
  cout <<"/";
  if (mounth<10) cout <<0<<mounth;
  else cout<<mounth;
  cout <<"/"<< year;
  return 0;
}
