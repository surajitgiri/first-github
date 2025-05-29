// #include<stdio.h>
// int power(int a , int b){
//     int x=1;
//     for(int i=1;i<=b;i++){
//         x=a*x;
//     }
//     return x;
// }
// int main(){
//     int a ;
//     printf("enter base:");
//     scanf("%d",&a);
//     int b;
//     printf("enter power:");
//     scanf("%d",&b);
//     int pow=power(a,b);
//     printf("%d",pow);
//     return 0;
// }


#include<stdio.h>               //USING RECURSION
int power(int a , int b){
   if(b==0) return 1;
    return a*power(a,b-1);      // it's alternative method is available at ->Power_2.c
}
int main(){
    int a ;
    printf("enter base:");
    scanf("%d",&a);
    int b;
    printf("enter power:");
    scanf("%d",&b);
   int p=power(a,b);
   printf("%d",p); 
    return 0;
}





