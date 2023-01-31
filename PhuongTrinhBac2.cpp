#include <iostream>
#include <math.h>
using namespace std;
//Giải phương trình bậc 2
int main(){
float a, b, c, delta;
cout <<"nhap a, b, c: ";
cin>>a>>b>>c;
delta=pow(b,2)-4*a*c;
if (a==0) {
  if (b==0){
    if(c==0) cout<<"Phuong trinh vo so nghiem!";
    else cout<<"Phuong trinh vo nghiem";
    
  }
  else cout<<"x= "<<-c/b<<endl;
}
else {
  if (delta<0) cout <<"VN";
  else {
    if(delta==0) cout <<"x= "<<-b/(2*a);
    else cout<<"x1= "<<(-b+sqrt(delta))/(2*a) <<"  " <<"x2= "<<(-b-sqrt(delta))/(2*a);
  }
}  return 0;
}
