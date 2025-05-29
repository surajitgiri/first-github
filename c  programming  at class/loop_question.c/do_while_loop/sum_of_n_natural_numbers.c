#include<stdio.h>
int main(){
    int n,i,sum;
    printf("enter a number: ");
    scanf("%d",&n);
    i=1;
    sum=0;
    do{
        sum+=i;
        i++;
    }
    while(i<=n);
    printf("sum = %d",sum);
    
    return 0;
}