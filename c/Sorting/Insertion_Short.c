#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
int main(){
    int arr[5]={4,3,5,1,2};     //smart code
    for(int i=1;i<5;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}