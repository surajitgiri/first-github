#include<stdio.h>
int DecimalToBinary(int n){
    int remainder=0,binary=0;
    int i=1;
    while(n!=0){
       remainder=n%2;
       n=n/2;
       binary+=remainder*i;
       i*=10;
    }
    return binary;
}
int main(){
    int n;
    printf("Enter a roll numbver: ");
    scanf("%d",&n);
    int twoDigit=n%100;
    printf("your equivalent binary number is %d",DecimalToBinary(5));
    return 0;
}