// #include<stdio.h>
// #include<string.h>
// int main(){
//     int x=5,y=7;    // it's possible
//     // int x=5;
//     // int y=7;
//    // int* a=&x,b=&y; // it's not possible
//    // int*x,y;  // here only x consider as a pointers and y consider as a integer;
//     int* a=&x;
//     int* b=&y;
//     x=6;
//     printf("%p\n",a);
//     printf("%p",b);
// return 0;
// }


                        // here is possible
#include<stdio.h>
 #include<string.h>
 typedef int* pointer;
 int main(){
    int x=5,y=7;
    pointer  a=&x,b=&y;
      printf("%p\n",a);
    printf("%p",b);
    return 0;
 }