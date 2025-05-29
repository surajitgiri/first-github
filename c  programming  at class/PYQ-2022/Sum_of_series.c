#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");       // 1 + 11 + 111 + 1111.
    scanf("%d",&n);
    int  final_sum=0;
    int pre_sum;
    int a=1;
    for(int i=1;i<=n;i++){
        pre_sum=0;
        for(int j=1;j<=i;j++){
           
            pre_sum+=a;
            pre_sum*=10;
        }
        pre_sum/=10;
        
        final_sum+=pre_sum;
    }
     printf("%d",final_sum);
    return 0;
}