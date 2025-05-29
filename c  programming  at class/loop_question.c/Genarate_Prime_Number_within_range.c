#include<stdio.h>
int main(){
    int a,b;
    printf("enter lower limit: ");
    scanf("%d",&a);
    printf("enter upper limit: ");
    scanf("%d",&b);
    printf("prime number between %d and %d\n",a,b);
    int k,flag;
    for(int i=a;i<=b;i++){
        flag=1;
        k=i;
        for(int j=2;j<=3;j++){
            if(k%j==0){
                flag=0;
               break;
            }
        }
          if(flag)  // here flag=1
          printf("%d\n",i);
    
    }
    return 0;
}