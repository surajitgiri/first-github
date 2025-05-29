#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
   int product=1;
    for( int i=1;i<=x;i++){
         
    product=product*i;
    }
    printf("your factorial number is:%d\n",product);
    
    return 0;
}
