#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[20];
    int length,flag;
    printf("enter a string: ");
    gets(str);
    length=strlen(str);
    flag=1;
    for(int i=0;i<=length/2;i++){
        if(str[i]!=str[length-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==1)  printf("%s is a palindrome \n",str);
    else  printf("%s is not a palindrome \n",str);
    
    return 0;
}