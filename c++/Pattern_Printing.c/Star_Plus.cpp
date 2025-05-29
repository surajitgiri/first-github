#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter a number:";
    cin>>n;
    int ml=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==ml  or j==ml) cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}