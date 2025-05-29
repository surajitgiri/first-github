#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[40];
    int lc,uc,dc,sc,length;
    printf("Enter a string \n");
    gets(str);
    lc=uc=dc=sc=0;
    length=strlen(str);
    for(int i=0;str[i]!='\0';i++){  //i<length;
        if(str[i]>='a' && str[i]<='z') lc++;
        else if(str[i]>='A' && str[i]<='Z') uc++;
       else if(str[i]>='0' && str[i]<='9') dc++;
        else sc++;
    }
    printf("The number of uppercase letters: %d\n",uc);
    printf("the number of lowercase letters: %d\n",lc);
    printf("the number of the digits: %d\n",dc);
    printf("the number of special character: %d\n",sc);
    return 0;
}
