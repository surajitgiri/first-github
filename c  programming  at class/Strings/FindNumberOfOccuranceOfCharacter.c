#include<stdio.h>
int main(){
    char str[30],ch;

    printf("enter a string: ");
    gets(str);
    printf("enter a character: ");
    scanf("%c",&ch);
   
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("the number of occurances of %c in '%s' is %d",ch,str,count);
    return 0;
}