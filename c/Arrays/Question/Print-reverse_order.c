#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i] );
    }
    printf("\n");
    int a=4;
    for(int i=0;i<=4;i++){
        printf("%d ",arr[a] );
        a--;
    }
    //printf("%d")
    return 0;
}