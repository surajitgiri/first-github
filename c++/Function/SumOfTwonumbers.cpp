#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
   int a;
   cout<<"enter 1st number:";
   cin>>a;
   int b;
   cout<<"enter 2nd number:";
   cin>>b;
   cout<<sum(a,b);
}