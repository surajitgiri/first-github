#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the point:";
    cin>>x;
    cin>>y;
    if(x>0 and y>0) cout<<"it's situated in 1st quadrent";
     if(x<0 and y>0) cout<<"it's situated in 2nd quadrent";
     if(x<0 and y<0) cout<<"it's situated in 3rd quadrent";
     if(x>0 and y<0) cout<<"it's situated in 4th quadrent";
     if(x==0 and (y>0 or y<0)) cout<<"it's lies on y axis";
     if((x>0 or x<0) and y==0) cout<<"it's lies on x axis";
     if(x==0 and y==0) cout<<"it's situated in origin";
    
}