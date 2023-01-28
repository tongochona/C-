#include <iostream>

using namespace std;
// đổi kí tự từ thường sang hoa
int main(){
  char ch;
  cout <<"Nhap vao 1 ki tu thuong: ";
  cin >>ch;
  if(ch>='a'&&ch<='z')
  lamlai:
  {
    cout << "ki tu do la: "<<ch<<endl;
    cout << "ma ascii cua ki tu do la: "<<(int)ch<<endl;
    char ch1=ch-32;
    cout << "chu hoa ki tu do la: "<<ch1<<endl;
  }
  else {
    cout<<"Vui long nhap lai:";
    cin>> ch;
    goto lamlai;
  }
  return 0;
}
