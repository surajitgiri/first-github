#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int x=n;x<=(n*10);x=x+n){
        printf("%d ",x);
    }
    return 0;
}