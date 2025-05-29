#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<=i;k++){
            int ick=factorial(i)/(factorial(k)*factorial(i-k));
            cout<<ick<<"   ";
        }
         cout<<"\n";
    }
}