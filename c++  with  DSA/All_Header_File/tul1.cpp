#include<iostream>
    //#include "this.h" --> this will produce an error if this.h is no present in the current directory

using namespace std;
int a=5,b=9,c=3,d=7;
int main(){
    cout<<"hello world"<<endl;
    cout<<a+b<<endl;
    cout<<++a<<endl;
    cout<<b++<<endl;
    cout<<--c<<endl;
    cout<<d--<<endl;
    return 0;
}