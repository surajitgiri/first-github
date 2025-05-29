#include<stdio.h>
int main(){
    int a;
    printf("enter  number of rows:");
    scanf("%d",&a);
    int b;
    printf("enter  number of column:");
    scanf("%d",&b);
    int arr[a][b];  // total element a*b
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}