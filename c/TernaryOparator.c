#include<stdio.h>
int main(){
    int x;
    //tarnary oparator
    printf("enter a number:");
    scanf("%d",&x);//expression1?expression2:expression3:
   x%2==0 ? printf("even number") : printf("odd number");
    return 0;
}