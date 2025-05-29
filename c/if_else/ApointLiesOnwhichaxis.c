#include<stdio.h>
int main(){
    float x1,y1;
    printf("enter the point x1 and y1:");
    scanf("%f %f",&x1,&y1);
    if(x1==0 && y1==0){
        printf("it lies on the origin");
    }
    else if(x1==0 && y1==y1){
        printf("it lies on y axis");
    }
   else if(y1==0 && x1==x1){
        printf("it lies on x axis");
    }
    else {
        printf("it does not lies x or y axis");
    }
    return 0;
}