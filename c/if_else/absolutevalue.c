#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
        printf(" your absolute value is :%d",x);
    }
    return 0;
}