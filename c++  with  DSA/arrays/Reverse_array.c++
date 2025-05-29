#include<iostream>
using namespace std;
int main(){
     int arr[]={4,2,7,8,1,2,5};
     int i=0;
     int j=6;
     while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
     }
     for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
     }
}


