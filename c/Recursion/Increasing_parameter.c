// #include<stdio.h>
// void increasing(int x ,int n){//here is use extra variable
//     if(x>n) return;
//        printf("%d\n",x);
//        increasing(x+1 ,n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter a Number:");
//     scanf("%d",&n);
//    increasing(1,n);
//     return 0;
// }


#include<stdio.h>
void increasing(int n){//use recursion
    if(n==0) return;
    // printf("%d\n",n);
    increasing(n-1);
          printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
   increasing(n);
    return 0;
}