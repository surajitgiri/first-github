#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n;j++){
            if((i==1 or i==n-1) or (j==1 or j==n)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}