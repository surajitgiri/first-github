#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter a number:";
    cin>>y;
    int a=1;
    for(int i=1;i<=y;i++){
        for(int j=1;j<=y-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=a;j++){
             cout<<"* ";
           
        }
          a+=2;
         cout<<"\n";
    }
   
}