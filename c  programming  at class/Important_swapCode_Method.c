#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("%d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
     printf("\n%d %d",a,b);
    return 0;
}