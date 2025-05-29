#include<stdio.h>
int main(){

   int c,r;
   printf("enter first matrix row and column size: ");
   scanf("%d %d",&r,&c);
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    int c2,r2;
    printf("enter second matrix row and column size: ");
    scanf("%d %d",&r2,&c2);
     int matrix2[r2][c2];
     for(int i=0;i<r2;i++){
         for(int j=0;j<c2;j++){
             scanf("%d",&matrix2[i][j]);
         }
     }
     int rc=c;
     int res[r][c2];
     if(c!=r2) {printf("multiplication not possible");}
     else{
        for(int i=0;i<r;i++){
           
            for(int j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<rc;k++){
                    res[i][j]+=matrix[i][k]*matrix2[k][j];
                }
                
            }
        }
     }
     printf("\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
     }
    return 0;
}