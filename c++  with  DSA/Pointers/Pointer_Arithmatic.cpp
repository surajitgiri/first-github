#include<iostream>
using namespace std;
int main(){
    int x=20;
    int *ptr=&x;
    double dec=9.8;
     cout<<sizeof(dec)<<"\n";
     cout<<sizeof(x)<<"\n";
    cout<<ptr<<"\n";
     cout<<(ptr+1)<<"\n";
     double *pt=&dec;
    cout<<pt<<" "<<(pt+1)<<"\n";
    return 0;
}