#include<stdio.h>
int main(){
    int r;
    printf("enter row number of the matrix;");
    scanf("%d",&r);
    int arr[r][r];
    // input
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    //transpose
    for(int i=0;i<r;i++){
        for(int j=i;j<r;j++){
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
    printf("\n");
    //rotate
    for(int i=0;i<r;i++){
        int j=0;
        int k=r-1;
        while(j<k){
            int tamp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=tamp;
            j++;
            k--;
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}