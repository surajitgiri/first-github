#include<stdio.h>
int factorial(int x){
if(x==0 || x==1) return 1;
 return x*factorial(x-1);
}
int combination(int i,int j){
    int icj=factorial(i)/(factorial(j)*factorial(i-j));
    return icj;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d   ",icj);
        }
        printf("\n");
    }
    return 0;
}