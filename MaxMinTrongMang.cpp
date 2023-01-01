#include <iostream>
using namespace std;
int main(){
  int a, max, min;
  cin >>a;
  int x[a];
  for (int i=1; i<=a; i++){
    cin >>x[i];
    if (i==1) max =x[1], min=x[1];
    max = max >x[i]?max:x[i];
    min = min<x[i]?min:x[i];
  }
  cout <<max<<" "<<min;
  return 0 ;
}
