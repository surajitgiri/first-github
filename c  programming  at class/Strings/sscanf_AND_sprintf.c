#include<stdio.h>
int main(){
    char str[100];
    int a;
    float f;
    char s[10];
    sprintf(str,"%d %f %s",12,23.4,"sdg");
    puts(s);
    sscanf(str,"%d %f %s",&a,&f,s);
    printf("a=%d f=%f s=%s",a,f,s);
    return 0;
}