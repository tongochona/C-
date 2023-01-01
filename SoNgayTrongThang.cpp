#include <iostream>

using namespace std;

int main(){
  int a;
  cin >>a;
  if (a==1||a==3||a==5||a==7||a==8||a==10||a==12) cout<<31;
  if (a==2) cout << 28;
  if (a==4||a==6||a==9||a==11)cout <<30;
  if (a<1||a>12) cout <<"NOT FOUND";
  return 0;
}
