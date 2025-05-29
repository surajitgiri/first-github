#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str1[20]="abcd",str2[20],str3[30],str4[40];
    printf("string in str1: %s",str1);
    /*copying str1 to str2 without using strcpy() begins */
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
        str2[i]='\0';  /* note that the null character '\0' is assigned to the last position in str2. this is required to mark the end of the string in it*/
    }
    printf("%s",str2);
    //* using strcpy() */
    strcpy(str3 ,str1);
    strcpy(str4,"hello");
    printf("%s\n",str3);
    printf("%s\n",str4);
    return 0;
}