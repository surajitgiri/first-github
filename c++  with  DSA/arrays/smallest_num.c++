#include<iostream>
using namespace std;
int main(){
    int arr[]={45,15,22,36,78,89,14};
    int min=INT16_MAX;
    for(int i=0;i<7;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}
