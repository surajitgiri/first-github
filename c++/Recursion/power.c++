#include<iostream>
using namespace std;
int power(int x, int y){
    if(y==0 ) return 1;
   return x*power(x,y-1);
    
}
int  main(){
  int x;
  cout<<"enter base : ";
cin>>x;
int y;
  cout<<"enter base : ";
cin>>y;

 cout<<power(x,y)<<"\n";
}