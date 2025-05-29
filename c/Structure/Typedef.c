// #include<stdio.h>
// typedef float realNumber;
// typedef int Integer;
// int main(){
//     Integer x=896;
//     realNumber y=3.145;
//     printf("%f\n",y);
//      printf("%d",x);
//     return 0;
// }


 #include<stdio.h>
 #include<string.h>
 int main(){
    typedef struct book{
        char name[50];
        int pages;
        float price; 
    }book;
    book d;
     book a;
      book b;
       book c;
 strcpy(a.name,"surajit giri");
    printf("%s\n",a.name);
    return 0;
 }