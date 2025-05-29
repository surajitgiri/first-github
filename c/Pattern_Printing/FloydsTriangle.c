#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
     int a=1;
    for(int i=1;i<=n;i++){
       
//int a=1;  it is for other condition; 
        for(int j=1;j<=i;j++){
             printf("%d ",a);
            //it is for print the odd number only;  nither use  a++;
            a=a+2;
        }
        printf("\n");
         
    }
    return 0;
}