#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int digit,sum=0;
    while(temp!=0){
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    if(n%sum==0){
        printf("Harshad number");
    }
    else   printf(" Not Harshad number");

    return 0;
}