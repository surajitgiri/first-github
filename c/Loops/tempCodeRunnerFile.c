#include<stdio.h>
int main(){
    int n,r=0,Lastdigit=0,x;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
Lastdigit=n%10;
r=r+Lastdigit;
r=r*10;
n=n/10;
    }
    r=r/10;
x=r+n;
    printf("sum of reverse and given number is:%d",x);
    return 0;
}