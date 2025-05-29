#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 or n==1) return 1;
   return n*factorial(n-1);
    
}
int  main(){
  int n;
  cout<<"enter n : ";
cin>>n;
//   int r;
//   cout<<"enter r : ";
// cin>>r;
// int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//   cout<<ncr<<"\n";
 cout<<factorial(n)<<"\n";
}