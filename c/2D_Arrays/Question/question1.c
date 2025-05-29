#include<stdio.h>
int main(){
    int a;
    printf("enter  number of the student:");
    scanf("%d",&a);
    int arr[a][2];  // total element a*b
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=2;j++){
            printf(" enter student %d detail's :  ",i+1);   // phy,che,math
           scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}