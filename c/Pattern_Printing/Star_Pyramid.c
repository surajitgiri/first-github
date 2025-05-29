#include<stdio.h>
int main (){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int d=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf("  ");
        }
        for(int k=1;k<=d;k++){// either use k<=2*i-1;
            printf("* "); 
             //very very important topic |
             }
            d=d+2;
        printf("\n");
    }
    return 0;
}
