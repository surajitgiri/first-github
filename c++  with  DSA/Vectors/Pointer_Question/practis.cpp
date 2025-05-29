#include<iostream>
#include<vector>
int main(){
    int arr[]={1,2,5,8,9,6,3};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]>arr[j] and arr[i]%2==0 and arr[j]%2!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}