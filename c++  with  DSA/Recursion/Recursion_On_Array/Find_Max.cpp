#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){
    int arr[]={2,8,7,9,5};
   cout<< f(arr,0,5);
    return 0;
}