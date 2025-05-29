#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if(x>80){
        printf("A grade");
    }
    else if(x>60){
        printf("B grade");
    }
    else if(x>40){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    
    return 0;
}