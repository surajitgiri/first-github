#include<stdio.h>
int main(){
    int x,y,z;
    printf("entor cost price:");
    scanf("%d",&x);
    printf("enter shelling price:");
    scanf("%d",&y);
    if(y>x){
        printf ("you got profit and");

    }
    else{
        printf("you got loss and");
    }
    z=y-x;
    printf("\n your profit money is : %d ",z);
    return 0;
}