#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){//if you want to reverse  then use  j<=n-i+1 
            printf("%d ",j);
        }
        printf("\n");
        
    }
    return 0;
}