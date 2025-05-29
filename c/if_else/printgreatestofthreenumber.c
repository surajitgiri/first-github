#include<stdio.h>
int main(){
    int x,y,z,a;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);
    printf("enter third number:");
    scanf("%d",&z);
    printf("enter fourth number:");
    scanf("%d",&a);
    if(x>y && x>z && x>a){
        printf("first number is greatest");
        printf("\n the number is:%d",x);
    }
    if(y>x && y>z && y>a){
        printf("second number is greatest");
        printf("\n the number is:%d",y);
    }
    if(z>x && z>y && z>a){
        printf("third number is greatest");
        printf("\n the number is:%d",z);
    }
    if(a>x && a>y && a>z){
        printf("the fourth number is greatest");
        printf("\n the number is:%d",a);
    }

    return 0;
}