#include<stdio.h>
int main(){
    int A,P,l,b;
    printf("enter length of the rectangular:");
    scanf("%d",&l);
    printf("enter breadth of the rectangular:");
    scanf("%d",&b);
    A=l*b;
    P=2*(l+b);
    if(A>P){
        printf("area of the rectangular is:%d",A);
    }
    return 0;
}