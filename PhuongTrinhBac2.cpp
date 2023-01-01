#include <iostream>
#include <math.h>
using namespace std;

int main(){
float a, b, c, delta;
cout <<"nhap a, b, c: ";
cin>>a>>b>>c;
delta=pow(b,2)-4*a*c;
if (a==0) {
  if (b==c&&b==0) cout<<"VSN";
  if (b==0&&c!=0) cout <<"VN" ;
  if(b!=0) cout<<"x= "<<-c/b<<endl;
}
else {
  if (delta<0) cout <<"VN";
  if (delta==0) cout <<"x= "<<-b/(2*a);
  if (delta>0) cout<<"x1= "<<(-b+sqrt(delta))/(2*a) <<"  " <<"x2= "<<(-b-sqrt(delta))/(2*a);
}  return 0;
}
