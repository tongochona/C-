#include <iostream>

using namespace std;

int main(){
  int a, b, c, d ;
  cout <<"nhap a, b, c, d: ";
  cin >> a >>b >>c >>d;
  if (a<b) a=b;
  if (a<c) a=c;
  if (a<d) a=d;
  cout<< "gia tri lon nhat la: " <<a<<endl;
  return 0;
}
