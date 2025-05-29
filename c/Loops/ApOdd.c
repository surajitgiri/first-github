#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int x=3; x<=(4*n)-1; x=x+4){
        printf("%d ",x);
    }
    return 0;
}