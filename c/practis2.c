#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  char ch[20];
  printf("enter a string: ");
  gets(ch);
  int flag=1 ,length=strlen(ch);
  for(int i=0;i<length/2;i++){
        if(ch[i]!=ch[length-i-1]){
            flag=0;
            break;
        }
  }
  if(flag==0) printf("it is palindrome");
  else  printf("it is not  palindrome");
    return 0;
}