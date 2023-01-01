#include <iostream>
using namespace std;

struct sinhvien{
  char hoten[50];
  float diem[50], tb;
  int somon;
};

void nhap(){
  sinhvien sv;
  cout<<"Nhap ho ten: ";
  cin.getline(sv.hoten, 50);
  fflush(stdin);
  cout<<"Nhap so mon: ";
  cin>>sv.somon;
  cout<<"Nhap diem "<<sv.somon<<" mon hoc: ";
  for(int i=0; i<sv.somon; i++){
    cin>>sv.diem[i];
  }
}

 int main(){
   sinhvien sv;
   int tong=0;
   nhap();
   for(int i=0; i<sv.somon; i++){
     tong+=sv.diem[i];
   }
   sv.tb=tong/float(sv.somon);
   cout<<sv.hoten<<endl;
   cout<<sv.tb<<endl;
 }
