#include<stdio.h>
int main(){
    int m;
    printf("enter first matrix row:");
    scanf("%d",&m);
    int n;
    printf("enter first matrix column:");
    scanf("%d",&n);
    printf("enter the detail's of first matrix :\n");
    int a[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[m][n]);
        }
     }
     printf("\n");
    int p;
    printf("enter second matrix row:");
    scanf("%d",&p);
    int q;
    printf("\nenter second matrix column:");
    scanf("%d",&q);
    printf("\nenter the detail's of second matrix :\n");
     int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d ",&b[p][q]);
        }
     }
   if(n!=p) {
    printf("the  both matrix are not multiplicable");
   }
   else{
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){// n or q
                res[i][j] += a[i][k]*b[k][j];
                
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
   }
    return 0;
}