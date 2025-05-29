#include<stdio.h>
int main(){
    int x;
    printf("enter your number:");
    scanf("%d",&x);
    if((x%5==0 || x%3==0)  && x%15!=0){
        printf("the number is divisible by 5 or 3 not divided by 15");
    }
    else{
        printf("the number is divisible by 15");
    }

return 0;
}