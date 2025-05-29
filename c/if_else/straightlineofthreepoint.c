#include<stdio.h>
int main(){
    float x1,x2,y1,y2,x3,y3,m1,m2;
    printf("enter first point x1 and y1:");
    scanf("%f %f",&x1,&y1);
    printf("enter second point x2 and y2:");
    scanf("%f %f",&x2,&y2);
    printf("enter third point x3 and y3:");
    scanf("%f %f",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1=m2){
        printf("all the three points fall on one straight line");
    }
    else{
        printf("not eligible for fall in one straight line");
    }
    return 0;
}