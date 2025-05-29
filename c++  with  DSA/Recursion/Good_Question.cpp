#include<iostream>
using namespace std;
int increase(int a, int b){
    if(b==0) return 0;
    increase(a,b-1);
    cout<<a*b<<" ";
}
int main(){
    int a,b;
    cin>>a>>b;
    increase(a,b);
    return 0;
}

    // output:
    // a=12;
    // b=5;
    // result -> 12,24,36,48,60