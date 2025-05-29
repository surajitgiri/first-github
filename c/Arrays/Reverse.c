#include<stdio.h>
int main(){
     int arr[5];
    for(int i=0;i<=4;i++){
        printf("enter element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int a=4;    //uses of extra variable
    for(int j=0;j<=4;j++){  //or use -> j=4;j>=0;j--
    printf("%d ",arr[a]);
    a--;
    }
  return 0;
}