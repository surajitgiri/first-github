#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6]={8,6,8,9,12,34};
    int max=arr[0];        //computer ke ander sabse chota number
    int smax=arr[0];
    for (int i=0;i<=5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
   // max=34
    for (int j=0;j<=5;j++){
        if(arr[j]!=max && smax<arr[j]){
            smax=arr[j];
        }
    }
    printf("%d",smax);
    return 0;
}
