#include<stdio.h>

int main(){
    int n=4;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
        for(int p=i+1;p<=n;p++){
            printf("%d");
        }
    }
  return 0;
}