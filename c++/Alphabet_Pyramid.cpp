#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter a number:";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
         for(int j=1;j<=a;j++){
            cout<<(char)(j+64)<<" ";
            
        }
         cout<<"\n";
         a+=2;
    }
}
   