#include<iostream>
using namespace std;
int main(){
    int x=12;
    int* ptr=&x;
    cout<<x<<"\n";
    *ptr=25;
    cout<<x<<"\n";
}


