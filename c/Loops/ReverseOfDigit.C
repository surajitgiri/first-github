#include<stdio.h>
int main(){
    int n,r=0,Lastdigit=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
Lastdigit=n%10;
if(Lastdigit%2==0)//if you want to print the reverse number(only even) of given number then put this condition||
r=r+Lastdigit;
r=r*10;
n=n/10;
    }
    r=r/10;
    printf("your reverse digit is:%d",r);
    return 0;
}