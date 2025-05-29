 //1+(1/2)+(1/3)+(1/4)+.....(1/n)

#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");         
    scanf("%d",&n);
    float sum=0;
    for(float i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%f",sum);
    return 0;
}