#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter age of the ram:");
    scanf("%d",&x);
    printf("enter age of the shyam:");
    scanf("%d",&y);
    printf("enter age of the sita:");
    scanf("%d",&z);
    if(x<y && x<z){
        printf("ram is youngest");
        printf("\nand his age is:%d",x);
    }
    if(y<z  && y<x){
        printf("shyam is youngest");
        printf("\n and his age is:%d",y);
    }
    if(z<x && z<y){
        printf("sita is youngest");
        printf("\n and her age is:%d",z);
    }
    return 0;
}