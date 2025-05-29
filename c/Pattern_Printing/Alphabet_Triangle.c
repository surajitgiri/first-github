#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf("  ");
        }
        int a=1;
        for(int k=1;k<=i;k++){
         int d =k+64; // or use k->a
         char ch=(char)d;
         printf("%c ",ch);
        a++;
        }
        printf("\n");
    }
return 0;
}
        
