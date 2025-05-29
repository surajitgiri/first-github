#include<stdio.h>
int main(){
    float a,x;
    printf("enter number:");
    scanf("%f",&x);
    a=100;
    for( int i=1;i<=x;i++){
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}