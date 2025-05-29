#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter 1st number:");
    scanf("%d",&x);
    printf("enter 2nd number:");
    scanf("%d",&y);
    printf("enter 3rd number:");
    scanf("%d",&y);
    if(x>y){
        if(x>z)
        printf("1st is greatest:%d",x);
    else
       printf("3rd is greatest:%d",z);
    }
    else{
if(y>z)
    printf("2nd is greatest:%d",y);
else
printf("3rd is greatest:%d",z);
    }

    return 0;
}