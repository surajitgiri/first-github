#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);     //   1 1 2 3 5 8 13 21...............
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=x-2;i++){        //  it's alternative solution is available in RECURSION |
    sum =a+b;
   a=b;
   b=sum;
    }
   printf("the fibonacci 0f %d is: %d\n",x,sum);
    
    
    return 0;
}

