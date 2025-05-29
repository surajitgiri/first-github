#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int name[50];
        int salary;
        int age;
    }a,b;
    strcpy(a.name,"SurajitGiri");
    a.salary=5000;
    a.age=18;
    strcpy(b.name,"rahulpramanik");
     printf("page : %d\n",a.age);
    printf("price: %d\n",a.salary);
    printf("book's name: %s\n",a.name);
      printf("book's name: %s\n",b.name);
    return 0;
}