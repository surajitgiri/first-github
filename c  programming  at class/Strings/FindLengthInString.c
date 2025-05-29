#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter a string: ");
    scanf("%s",&str);
     /*finding the length of the string without using strlen() ends*/
    int length=0;
    // for(int i=0;str[i]!='\0';i++){
    //     length++;
    // }
    // printf("length is %d",length);
    /* using strlen() */
    length=strlen(str);
    printf("%d",str);
    return 0;
}