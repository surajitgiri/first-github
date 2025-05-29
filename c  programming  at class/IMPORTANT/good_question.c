#include<stdio.h>
#include<math.h>
void main(){
    int n,fact,k,p;
    float tr,x,x1,s=1;
    scanf("%f %d",&x,&n);
    x=3.14/180*x1;
    for(int i=2;i<=n;i=i+2){
        fact=1;
        for(k=1;k<=i;k++){
            fact=fact*k;
            p=pow(-1,i)/fact;
            s=s+tr;
            printf("%f",s);
        }
    }
}