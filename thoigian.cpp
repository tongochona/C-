#include<iostream>
#include<ctime>
using namespace std;

int main(){
    time_t now= time(0);
    char* nowt= ctime(&now);
    cout<<nowt<<endl;
    cout<<time(NULL)<<endl;
    cout<<now<<endl;
    tm *pp= localtime(&now);
    cout<< "gio:v" <<pp->tm_hour<<endl;
    tm *pt=gmtime( &now);
    cout<<pt<<endl;
}