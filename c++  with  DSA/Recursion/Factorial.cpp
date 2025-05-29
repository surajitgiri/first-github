#include<iostream>
using namespace std;
int factorial(int x){
    if(x==1) return 1;
    return x*factorial(x-1);

}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}