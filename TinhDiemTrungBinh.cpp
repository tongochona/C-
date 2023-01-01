//to ngoc hoan
// 21ktmt
//106210213

#include <iostream>
using namespace std;
int main(){
  float t, l, h, tb;
  int stt;
  string ht, hl;// hl la hoc luc
  cout<< "Nhap so thu tu: ";
  cin>>stt;
  cin.ignore();
  cout<<"Nhap ho ten: ";
  getline(cin,ht);
  cout<<"Nhap diem toan, li, hoa: ";
  cin>>t>>l>>h;
  tb=(t+l+h)/3;
  if (tb>=9) hl="XS";
  else{
    if (tb>=8) hl="Tot";
    else{
      if(tb>=5) hl="Kha";
      else hl="Yeu";
    }
  }
  cout<<"-----------Ket qua-----------"<<endl;
  cout<<"Ho va ten: "<<ht<<endl;
  cout <<"So thu tu: "<<stt<<endl;
  cout <<"Toan: "<<t<<"   Li: "<<l<<"    Hoa: "<<h<<endl;
  cout <<"Diem trung binh: "<<tb<<endl;
  cout<<"Hoc luc: "<<hl<<endl;
  return 0;
}
