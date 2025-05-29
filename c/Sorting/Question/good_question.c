#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[7]={7,4,5,9,8,2,1};
   
   
    for(int i=0;i<7;i++){
         int min=INT_MIN;
         int minidx=-1;
        for(int j=i;j<7;j++){
          if(min<arr[j]){
            min=arr[j];
            minidx=j;
          }
        }
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    
     for(int i=0;i<1;i++){
        printf("%d ",arr[n-1]);
     }
   
    return 0;
}