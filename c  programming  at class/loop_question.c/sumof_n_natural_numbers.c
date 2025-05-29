#include<stdio.h>
int main(void){
    int i=2,n,sum;
    i++;
    printf("enter a number: ");
    scanf("%d",&n);
    sum=0;
    i=1;
    abc:
        sum+=i;
        i++;
        if(i<=n) goto abc;
        printf("sum = %d\n",sum);
        return 0;
}