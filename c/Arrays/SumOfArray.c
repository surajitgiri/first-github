#include<stdio.h>
int main(){
    int x;
    printf("enter  number of Arrays:");
    scanf("%d",&x);
    int arr[x]; 
    for(int i=0;i<=x-1;i++)   {
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<=4;i++){
         sum=sum+arr[i];
        }
     printf("%d",sum);
    return 0;
}