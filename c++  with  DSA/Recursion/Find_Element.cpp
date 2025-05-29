#include<iostream>
using namespace std;
int findElement(int *arr,int idx,int size,int n){
        if(idx==size-1) return false;
        
        return (arr[idx]==n) || findElement(arr,idx+1,size,n) ;
        
}
int main(){
    int arr[]={2,5,6,89,47,23,48};
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<findElement(arr,0,7,n);
    return 0;
}