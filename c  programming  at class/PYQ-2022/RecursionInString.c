#include<stdio.h>

    // not recursive

// int FindLength( char *str){
//     int length=0;
//     while(str[length]!='\0'){
//         length++;
//     }
//     return length;
// }

    // recursive
int FindLength( char *str){
    if(*str=='\0'){
        return 0;
    }
    return 1+FindLength(str+1);
    
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf(" the length of the string is: %d", FindLength(str));
    return 0;
}