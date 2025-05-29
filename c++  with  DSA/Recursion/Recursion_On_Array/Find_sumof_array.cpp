#include<iostream>
using namespace std;
int sum(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];
    return arr[idx]+sum(arr,idx+1,n);
}
int main(){
    int arr[]={2,3,26,20,1};
    cout<<sum(arr,0,5);
    return 0;
}

