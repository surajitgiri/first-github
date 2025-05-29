#include<iostream>
#include<cmath>
using namespace std;
int change(long long binary){
    int decimal=0, i=0;
    while(binary!=0){
        int digit=binary%10;
        decimal+=digit*pow(2,i);
        binary/=10;
        i++;
    }
    return decimal;
}
int main(){
    int binary;
    cin>>binary;
    int decimal=change(binary);
    cout<<"decimal code is: "<<decimal;
    return 0;
}