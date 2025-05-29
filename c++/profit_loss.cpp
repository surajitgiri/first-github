#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter cost price: ";
    cin>>a;
    int b;
     cout<<"enter shelling price: ";
    cin>>b;
   if(a>b){ cout<<"you got loss : " <<a-b;}
    if(b>a) cout<<"you got profit : "<<b-a;
    if(a==b) cout<<"No profit No loss";
 
    return 0;
}