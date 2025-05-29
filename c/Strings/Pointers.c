// #include<stdio.h>
// #include<string.h>
// int main(){
//     char*ptr="college wallah";
//     //ptr="physics wallah";      // it's allowt a new address
//    ptr='a';     // not possible
//     printf("%s",ptr);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="college wallah";
//     //str[40]="physics wallah";    // not possible
//     str[0]='a';    
//     printf("%s",str);
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";
    char*ptr=str;
    str[0]='M'; // ptr is a shallow copy
   //*ptr='a';    
    //ptr="physics wallah";
    printf("%s",ptr);
    return 0;
}