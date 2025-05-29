#include<stdio.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
//    gets(str);
   printf("\n");
    printf("your input was\n ");
    for(int i = 0;i < str;i++){
        printf("%d",str[i]);
    }
    return 0;
}