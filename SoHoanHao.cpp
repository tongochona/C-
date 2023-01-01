#include <iostream>

using namespace std;

int main(){
  int a, i, tong, sodu;
  cout << "so can kiem tra: ";
  cin >>a;
  tong=0;
  if (a<1) cout<<"day ko phai so hoan hao";
  else {
    for (int i=1; i<=a;i++){
      sodu=a%i;
      if (sodu==0) tong+=i;
    }
    if ((2*a)==tong) cout<<"day la so hoan hao";
    else cout <<"day ko phai so hoan hao";
  }
  return 0;
}
