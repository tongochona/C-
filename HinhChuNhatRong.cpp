#include <iostream>

using namespace std;
//vx hình chữ nhật rỗng
int main(){
  int chieudai, chieurong;
  cout <<"nhap chieudai, chieurong: ";
  cin >>chieudai>>chieurong;
  for(int i=0; i<chieudai; i++){cout<<"*";
}
cout <<endl;
for (int j=0; j<(chieurong-2); j++){
  cout<<"*";//vẽ viền

  for (int j=0 ;j<chieudai-2; j++){
    cout<<" ";
  }
  cout<<"*";//vẽ viền
  cout<<endl;
}
for(int k=0; k<chieudai; k++){
  cout <<"*";
}
return 0;
}
