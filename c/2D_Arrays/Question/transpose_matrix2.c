#include<stdio.h>
int main(){
    int r;
    printf("enter  number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter  number of column:");
    scanf("%d",&c);
    int arr[r][c];  // total element a*b
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
     // transpose value store here
    printf("\n");
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
        printf("\n");
                              // printing brr;
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
          printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}