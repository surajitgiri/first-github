#include<stdio.h>
int main(){
    int n;
    printf("Enter day number(1-7): ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saterday");
        break;
       default:
       printf("Invalid Number");
        
    }
    return 0;
}