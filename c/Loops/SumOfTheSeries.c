// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);//1-2+3-4+5-6+7....n terms
//     int sum=0;//even number ..subtract  //odd number.... add
//       if(n%2==0) {
//         sum=-n/2;
//       } 
//     else sum =-n/2+n;
    
//     printf("the sum is :%d",sum);

//     return 0;
//}


#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);//1-2+3-4+5-6+7....n terms
    int sum=0;//even number ..subtract  //odd number.... add
     for(int i=1;i<=n;i++){
       if(i%2==0) {
        sum=sum+(-i);
      } 
    else sum +=i;
     }
    
    printf("the sum is :%d",sum);

    return 0;
}