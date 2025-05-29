#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        
         for(int j=1;j<=i;j++){
            if(i%2!=0){
            printf("%d ",j);
            }
            if(i%2==0){
           int d=a+64;
            char ch=(char)d;
        printf("%c ",ch);
            a++;
            }
        }
        printf("\n");
        }
    return 0;
}