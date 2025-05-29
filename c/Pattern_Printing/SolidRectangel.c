#include<stdio.h>
int main(){
    int n,x;
    printf("enter row:");
    scanf("%d",&n);
    printf("enter coulmn:");
    scanf("%d",&x);
    for(int i=1;i<=n;i++){//this is for line |
          for(int j=1;j<=x;j++){
            
    printf("* ");
            
            
          }
          printf("\n");
    }
    return 0;
}