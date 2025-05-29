#include<iostream>
using namespace std;
void swa(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=10;
    int y=20;
    swa(&x,&y);
    cout<<x<<y;
    return 0;
}