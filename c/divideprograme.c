#include<stdio.h>
int main(){
    int a,b;
  printf("enter first number:");
  scanf("%d",&a);
  printf("enter second number:");
  scanf ("%d",&b);
  int r;
  
  r=a%b;
  printf("your remainder is:%d",r);

    return 0;
}