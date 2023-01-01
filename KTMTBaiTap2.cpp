#include <iostream>
using namespace std;

void nhapten (string &hoten){
  cout<<"Nhap ho va ten: ";
  cin>>hoten;
  fflush(stdin);
}
float nhapdiem (float &t, float &v, float &a, float &l, float &h, float &s){
  cout<<"Nhap lan luot cac diem Toan, Van, Anh, Li, Hoa, Sinh: ";
  cin>>t>>v>>a>>l>>h>>s;
  cout<<endl;
}
float diemtb (float t, float v, float a, float l, float h, float s, float &tb){
  tb=(t+v+a+l+h+s)/6.00;
}
void phanloai (float tb, string &hocluc){
  if(tb>=8) hocluc="Tot";
  else {
    if(tb>=6) hocluc="Kha";
    else {
      if(tb>=4) hocluc="Trung binh";
      else hocluc="Yeu";
    }
  }
}
int main(){
  float t, a, v, l, h, s, tb, diem;

  string loai, ten;
  nhapten(ten);


  nhapdiem(t, v, a, l, h, s);
  diemtb(t, v, a, l, h, s, tb);
  phanloai(tb, loai);
  cout<<"------------------------Ket qua--------------------------------"<<endl;
  cout<<ten<<endl;
  cout<<"Toan: "<<t<<"    Van: "<<v<<"     Anh: "<<a<<"     Li: "<<l<< "     Hoa: "<<h<<"    Sinh: "<<s<<endl;
  cout<<"Diem trung binh: "<<tb<<endl;
  cout<<"Hoc luc: "<<loai<<endl;
}
