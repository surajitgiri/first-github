// #include<stdio.h>
// int gcd(int a,int b){
//     while(b!=0){
//         int temp=b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     scanf("%d",&a);
//      scanf("%d",&b);
//     printf("%d",gcd(a,b));
//     return 0;
// }


//using recursion
#include<stdio.h>
int gcd(int a,int b){
if(b==0) return a;
     return   gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d",&a);
     scanf("%d",&b);
    printf("%d",gcd(a,b));
    return 0;
}


// #include<stdio.h>
// int gcd(int a,int b){
//     if(b==0) return 0;
//     return gcd(b,a%b);
// }
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d",gcd(a,b));
//     return 0;
// }