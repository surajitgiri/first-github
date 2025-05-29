#include<stdio.h>
int main(){
    int k;
    printf("enter a number:");
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        int a=i-1;
        for(int q=1;q<=k-i;q++){// this loop for spaces
            printf("  ");
        }
        for(int j=1;j<=i;j++){//this for print the number
            printf("%d ",j);
        }
        for(int x=1;x<=i-1;x++){//this is for reverse print number
            printf("%d ",a);
            a--;
            
        }
        printf("\n");
    }
    return 0;
}