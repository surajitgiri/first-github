#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
                printf("(%d %d)\n",arr[i],arr[j]);
            }
       }
    }
return 0;
}