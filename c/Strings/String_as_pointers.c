#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";
    char*ptr=str;   // ptr now points to str[0]
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;  //address change karte jao
        i++;
    }
    return 0;
}