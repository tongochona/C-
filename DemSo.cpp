#include <iostream>
using namespace std;
int main(){
  int a, max, i, min;
  i=0;
  min=100000000;
  max=0;
  cout<<"Nhap vao day so co so cuoi cung la so 0: ";
  while(a!=0){
    cin>>a;
    max = max>a?max:a;
    if(a!=0) min = min<a?min:a;
    i++;
  }
  if (max==0) cout<<"day chi co so 0";
  else{
  cout <<"day co so so hang la: "<<i<<endl;
  cout<<"So lon Nhat cua day la: "<<max<<endl;
  cout<<"So nho nhat cua day la: "<<min<<endl;
 }
  return 0;
}
