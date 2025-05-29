#include<stdio.h>
int main(){
    int x;
    printf("enter percentage:");
    scanf("%d",&x);
    if(x>90 && x<100)
    printf("excellent");
if(x>80 && x<90)
printf("very good");
if(x>70 && x<80)
printf("good");
if(x>60 && x<70)
printf("can do better");
if(x>50 && x<60)
printf("average");
if (x>40 && x<50)
printf("below average");
if(x<40)
printf("try to give better performance in next exam");

    return 0;
}