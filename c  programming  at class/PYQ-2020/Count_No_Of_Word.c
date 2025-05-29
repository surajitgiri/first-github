#include<stdio.h>
int main(){
    char str[200];
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    int count=0, length=0;

    for(int i=0;str[i]!='\0';i++){
        length++;
    }

    for(int i=0;i<=length;i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("No. of words = %d",count);
    return 0;
}