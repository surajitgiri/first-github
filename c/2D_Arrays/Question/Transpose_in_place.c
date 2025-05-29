#include<stdio.h>
int main(){
    int r;
    printf("enter  number of rows:");
    scanf("%d",&r);
    int arr[r][r];  // total element a*b
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]); 
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=i;j<r;j++){   // j=0;j<=i;j++
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
       
    } 
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}