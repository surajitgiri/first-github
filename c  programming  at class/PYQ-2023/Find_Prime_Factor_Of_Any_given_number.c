#include<stdio.h>
void primeFactor(int n){
    while(n%2==0){
        printf("%d ",2);
        n/=2;
    }
    for(int i=3 ; i*i<=n  ;i+=2){
        while(n % i == 0){
            printf("%d ",i);
            n/=i;
        }
    }
   
}
int main(){
    int n;
    printf("enter a positive integer: ");
    scanf("%d",&n);
   
    if(n<=0) printf("please enter a positive integer: ");
    else{
        printf("prime factors: ");
        primeFactor(n);
        printf("\n");
    }
    return 0;
}