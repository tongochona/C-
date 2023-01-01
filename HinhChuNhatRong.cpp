#include <iostream>

using namespace std;

int main(){
  int a, b, i, j, k;
  cout <<"nhap a, b: ";
  cin >>a>>b;
  for(int i=1; i<=a; i++){cout<<"*";
}
cout <<endl;
for (int j=2; j<=(b-1); j++){
  for (int j=1 ;j<=a; j++){
    if(j>=2&&j<a)
    cout<<" ";
    else cout<<"*";
  }
  cout<<endl;
}
for(int k=1; k<=a; k++){
  cout <<"*";
}
return 0;
}
