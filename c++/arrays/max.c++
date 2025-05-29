#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,8,9,3,10};
    int max=INT16_MIN;
    int smax=INT16_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     for(int i=0;i<7;i++){
        if(arr[i]>smax and max!=arr[i]){
            smax=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<smax<<endl;
}