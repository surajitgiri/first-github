#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str1[20]={"abc"},str2[20]={"aac"},str3[20]={"abc"};
    int diff;
    printf("str1=%s str2=%s \n",str1,str2);
    int i=0;

    while((str1[i]==str2[i]) && (str1[i]!='\0') && (str2[i]!='\0')){
       i++;
       diff=str1[i]-str2[i];
    }
     
     printf("difference between %s and %s = %d\n",str1,str2,diff);

    // diff=strcmp(str1,str2);
    // printf("Difference between %s and %s=%d\n",str1,str2,diff);
    return 0;
}

