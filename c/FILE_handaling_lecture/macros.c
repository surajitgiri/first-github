#include<stdio.h>
#define pi 3.14159265359
float area(float r){
    return pi*r*r;
}
int main(){
    printf("%f",area(5.3));
    return 0;
}