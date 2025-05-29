#include<iostream>
using namespace std;
int  factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int  combination(int i,int j){
    int icj=factorial(i)/(factorial(j)*factorial(i-j));
    return icj;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            cout<<icj<<"  ";
        }
        cout<<endl;
    }
    return 0;
}