#include<stdio.h>
int main(){
float m,p,c,b,e,T;
    printf("enter your mathematics number:");
    scanf("%f",&m);
    printf("enter your physics number:");
    scanf("%f",&p);
    printf("enter your chemistry number:");
    scanf("%f",&c);
    printf("enter your bengali number:");
    scanf("%f",&b);
    printf("enter your english number:");
    scanf("%f",&e);
    T=(m+p+c+b+e)/5;
    printf("your percentage in five subject is:%f",T);


    return 0;
}