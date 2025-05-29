#include<stdio.h>
int main(){
    int a,b,x=1;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    for( int i=1;i<=b;i++){
    x=a*x;
    }
    printf("your answer is:%d",x);
    
    return 0;
}
