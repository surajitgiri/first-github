#include<stdio.h>
#include<math.h>
float sumSeries(float x, int n){
    float sum=0;
    int sign=1;
    for(int i=1;i<=n;i+=2){
        sum+=sign*pow(x,i);
        sign= -sign;

    }
    return sum;
}
int main(){
    float x;
    int n;
    printf("enter the value of x: ");
    scanf("%f",&x);
    printf("enter the value of n: ");
    scanf("%d",&n);

    printf("%f",sumSeries(x,n));
    return 0;
}