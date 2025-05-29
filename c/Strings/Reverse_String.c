#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("enter a string:");
    gets(str);
  
    int k=0;
    int size=0;
    while (str[k]!='\0'){
        k++;
        size++;
    }
    
        printf("the size is: %d\n",size);
    
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}