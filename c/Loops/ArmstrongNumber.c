#include<stdio.h>
int main(){
  int n,digit,sum=0;
  scanf("%d",&n);
  int  store=n;
  while(n!=0){
    digit=n%10;
    sum+=(digit*digit*digit);
    n/=10;
  }
  if(store==sum){
    printf("arm");
  }
  else  printf("not arm");

    return 0;
}