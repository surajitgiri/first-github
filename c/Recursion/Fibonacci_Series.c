#include<stdio.h>
int fibonacci(int a){
    if(a==1 || a==2) return 1;
   return fibonacci(a-1)+fibonacci(a-2);
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",fibonacci(a));
    return 0;
}