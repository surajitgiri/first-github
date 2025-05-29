#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,6,8,9};
    cout<<sizeof(arr)<<endl;
     cout<<sizeof(arr)/sizeof(arr[0])<<endl;    // length of array
}