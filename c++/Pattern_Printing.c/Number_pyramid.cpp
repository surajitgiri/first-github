#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
   
    for (int i=1;i<=n;i++){
        int x=1;
        for(int j=1;j<=i;j++){
            cout<< x<<" ";
             x+=2;
        }
       
        cout<<"\n";
       
    }
}