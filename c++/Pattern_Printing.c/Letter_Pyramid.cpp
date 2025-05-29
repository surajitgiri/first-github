#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    int a=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
           cout<<(char)(a+96)<<" ";
            a++;
        }
        cout<<"\n";
    }
}