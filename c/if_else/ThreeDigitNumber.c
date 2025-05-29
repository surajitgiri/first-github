#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("it is a three  digit number");
    }
    else{
        printf("it is not a three digit number");
    }
    return 0;
}