#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    int temp=n;

    int hour=temp/3600;

    int temp2=n%3600;

    int min=temp2/60;
    
    int sec=temp2%60;

    printf("%d hour %d min %d sec",hour,min,sec);
    return 0;
}