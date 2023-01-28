#include <iostream>

using namespace std;

int main(){
  int a;
  cout <<"so phut goi la: ";
  cin >>a;
  if(a<=50) cout <<"so tien la: "<<25000+600*a;
  else
  {
    if(a<=200) cout <<"so tien la: "<<25000+600*50+400*(a-50);
    else{
      cout <<"so tien la: "<<25000+600*50+400*150+200*(a-200);
    }
  }
  return 0 ;
}
