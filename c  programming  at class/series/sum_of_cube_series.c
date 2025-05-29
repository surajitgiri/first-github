      //1^3+2^3+....+n^3

#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");         
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(i*i*i);
    }
    printf("%d",sum);
    return 0;
}