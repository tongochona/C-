#include <iostream>
using namespace std;
int main(){
  int a, i, j, x;
  cout <<"Nhap vao mot so nguyen: ";
  cin >>a;
  cout<<"Cac so nguyen to be hon no la: ";
  if (a>2);
  cout<<2<<"  ";
  for( i=3; i<a; i++){
    for( j=2; j<i;j++){
      x=i%j;
      if (x==0) break;
    }
    if(i==j) cout<<i<<"  ";
  }
  return 0;
}
