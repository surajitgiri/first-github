#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
        }
    return fact;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int r;
    printf("enter r:");
    scanf("%d",&r);
    
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("your combination value is:%d",ncr);
    return 0;
}