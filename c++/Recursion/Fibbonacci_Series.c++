#include<iostream>
using namespace std;
int fib(int x){
    if(x==1 or x==2 ) return 1;
   return fib(x-1)+fib(x-2);
    
}
int  main(){
  int x;
  cout<<"enter a number : ";
cin>>x;
 cout<<fib(x)<<" ";
}