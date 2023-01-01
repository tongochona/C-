// to ngoc hoan
//21ktmt
//106210213

#include <iostream>
using namespace std;
int main(){
  string ht;
  float lcb, hs, luong;
  cout<<"Nhap luong co ban va he so luong: ";
  cin>>lcb>>hs;
  cin.ignore();
  cout<< "Nhap ho ten cong nhan: ";
  getline(cin, ht);
  luong=lcb*hs;
  cout<<"Ket qua la: "<<endl;
  cout <<"Ho va ten: "<< ht<<endl;
  cout<<"Muc luong: "<<luong;
  return 0;
}
