#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if(x%5==0 && x%3==0){
        printf("it is divisible by 5 and 3");
    }
    else{
        printf("it is not divisible by 5 and 3");
    }
    return 0;
}