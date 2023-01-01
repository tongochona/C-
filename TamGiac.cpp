#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, p;
  cout << "nhap ba canh tam giac: ";
  cin >>a>>b>>c;
  if (a+b<=c||a+c<=b||b+c<=a) cout << "day khong phai la tam giac";
else{ p=(a+b+c)/2;
      cout << "chu vi tam giac la: "<<setprecision(2)<<fixed<< 2*p<<endl;
      cout << "dien tich tam giac la: "<<setprecision(2)<<fixed<< sqrt(p*(p-a)*(p-b)*(p-c));
    }

   return 0;
}
