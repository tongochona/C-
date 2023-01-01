#include <iostream>

using namespace std;

int main(){
  int a, i, sodu;
  cout <<"so can kiem tra: ";
  cin >>a;
if (a<2) cout <<" day khong phai la so nguyen to";
else{
  for(int i=2;i<=(a/2); i++){
    sodu=a%i;
    if (sodu==0) break;

  }
  if (sodu==0) cout <<"day ko phai la so nguyen to";
  else cout <<"day la so nguyen to";
}
  return 0;
}
