#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
   int a=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< a<<" ";  // ekhane a++ ekbere die dileo hobe 
            a++;
        }
       
        cout<<"\n";
       
    }
}