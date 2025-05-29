#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:") ;
    scanf("%d",&n);
  int  nsp=1;
  int nst=n;
  for(int i=1;i<=2*n+1;i++){
    printf("%d ",i);
  }
  printf("\n");
  for(int i=1;i<=n;i++){
    int a=n-i+1;
    for(int j=1;j<=nst;j++){
        printf("%d ",j);
     
    }
    for(int k=1;k<=nsp;k++){
        printf("  ");
        
    }
    for(int j=1;j<=nst;j++){
        printf("%d ",a);
        a--;
    }
    printf("\n");
    nst--;
    nsp +=2;
  }

    return 0;
}
