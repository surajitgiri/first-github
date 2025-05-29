#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int price;
        int page;
    }a,b,c;
   strcpy(a.name,"secret seven");
    a.page=450;
    a.price=250;
     strcpy(b.name,"hidden tresure");
    b.page=1000;
    b.price=355;
     strcpy(c.name,"famous five");
    c.page=1200;
    c.price=455;
printf(" book a detail's\n\n");
   printf("page : %d\n",a.page);
    printf("price: %d\n",a.price);
    printf("book's name: %s\n",a.name);
printf(" book b detail's\n\n");
   printf("page : %d\n",b.page);
    printf("price: %d\n",b.price);
    printf("book's name: %s\n",b.name);
printf(" book c detail's\n\n");
   printf("page : %d\n",c.page);
    printf("price: %d\n",c.price);
    printf("book's name: %s\n",c.name);
   
    return 0;
}