// #include<stdio.h>
// int main(){
//    char text[80],c;
//    int i=0;
//    printf("Enter a line of text \n");
//    c=getchar();
//    while(c!='\n'){
//     text[i]=c;
//     c=getchar();
//     i++;
//    }
//    text[i]='\0';
//    printf("the line of text entered is \n");
//    for(i=0;text[i]!='\0';i++){
//         putchar(text[i]);
//    }
//     return 0;
// }

#include<stdio.h>
int main(){
    char str[40];
    printf("Enter a line of a string: ");
    gets(str);
    printf("your output is : ");
    puts(str);
}