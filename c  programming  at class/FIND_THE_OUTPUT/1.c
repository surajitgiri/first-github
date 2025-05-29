#include<stdio.h>
int f(int *a, int n){
    if(n<=0) return 0;
    else if(*a%2==0) return (*a+f(a+1 , n-1));
    else return (*a-f(a+1 , n-1));

    //return *a;  //extra 
}
int main(){
   int a[]={1,2,7};
   printf("%d",f(a,3));
   
    return 0;
}