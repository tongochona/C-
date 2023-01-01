#include <iostream>

using namespace std;

int main(){
  char ch;
  cout <<"nhap vap 1 ki tu: ";
  cin >>ch;
  cout << "ki tu do la: "<<ch<<endl;
  cout << "ma ascii cua ki tu do la: "<<(int)ch<<endl;
  char ch1=ch-32*(ch>='a'&&ch<='z');
  cout << "chu hoa ki tu do la: "<<ch1<<endl;
  return 0;
}
