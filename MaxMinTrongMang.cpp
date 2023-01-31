#include <iostream>
using namespace std;
//Nhập vào mảng số nguyên, in ra số coá giá trị lớn nhất và nhỏ nhất
int main(){
  int a, max, min;
  cin >>a;
  int x[a];
  for (int i=0; i<a; i++){
    cin >>x[i];
  }
  max =x[0], min=x[0];
  for(int i=0; i<a; i++){
    max = max >x[i]?max:x[i];
    min = min<x[i]?min:x[i];
  }
  cout <<max<<" "<<min;
  return 0 ;
}
