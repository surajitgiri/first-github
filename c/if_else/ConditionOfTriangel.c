#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first sides of triangel:");
    scanf("%d",&a);
    printf("enter second sides of triangel:");
    scanf("%d",&b);
    printf("enter thired sides of triangel:");
    scanf("%d",&c);
    if((a+b)>c   &&  (b+c)>a  && (c+a)>b){
        printf("it is eligible for triangel");
    }
    else{
        printf("it is not valid for triangel");
    }
    return 0;
}