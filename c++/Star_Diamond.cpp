#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int nsp=1;
    int nst=n/2;
    int ml=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"   ";
        }
        for(int k=1;k<=nst;k++){
            cout<<"* ";
        }
            if(i<ml){
                nst+=2;
                nsp--;
            }
            else{
                nst-=2;
                nsp++;
            }
        
        cout<<"\n";
    }
}
