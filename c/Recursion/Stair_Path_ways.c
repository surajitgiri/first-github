#include<stdio.h>
int step(int a){
    if(a==1) return 1;
    if(a==2) return 2;
    int totalways= step(a-1)+step(a-2); //   ekhne maximum 2 step jump korte parbe
    return totalways;
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",step(a));
    return 0;
}



// #include<stdio.h>
// int step(int a){
//     if(a==1) return 1;
//     if(a==2) return 2;
//     if(a==3) return 3;
//     int totalways= step(a-1)+step(a-2)+step(a-3)+1;     //  ekhne maximum 3 step jump korte parbe
//     return totalways;
// }
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     printf("%d",step(a));
//     return 0;
// }