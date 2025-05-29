#include<stdio.h>
int main(){
    int arr[10],n;
    printf("enter a number between (1-10): ");
    scanf("%d",&n);
     
      
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
       
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int max=arr[0];
    for(int j=0;j<n;j++){
       
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);

    return 0;
}