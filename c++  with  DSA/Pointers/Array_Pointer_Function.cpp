#include<iostream>
using namespace std;
void process(int *arr,int n){   //inside this function we have the access of the same array in the main
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<"\n";
    }
    *(arr+1)=66;
}
int main(){
    int arr[3]={5,8,9};
    process(arr,3);
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}