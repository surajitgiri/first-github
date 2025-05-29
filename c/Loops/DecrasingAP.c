#include<stdio.h>
int main(){
    int n,z;
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter first term of AP:");
    scanf("%d",&z);
    for(int i=1;z>0 ;i++){
        printf("%d ",z);
        z=z-3;

    }
    return 0;
}