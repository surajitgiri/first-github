// #include<stdio.h>
// void sum(int n ,int s){
//    if(n==0){
//      printf("%d",s);
//     return;
//    }
//    sum(n-1,s+n);
//   return;
// }
// int main(){
//     int n;
//     printf("Enter a Number:");
//     scanf("%d",&n);
//    sum(n,0);
//     return 0;
// }

#include<stdio.h>// Using recursion method
int sum(int n){
   if(n==0) return 0;
   return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}





