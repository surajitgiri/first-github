#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct student{
    int rollno;
    char name[50];
    char depertment[50];
    char course[50];
    int year;
}student;
student a,b;
strcpy(a.name,"surajit");
strcpy(a.depertment,"chemical_engineering");
strcpy(b.name,"shyamal");
strcpy(b.depertment,"chemical_engineering");

bool flag=true;
if(a.depertment!=b.depertment) flag=false;
if(flag==true) printf("the both student department is   same");
else  printf("the both student department is not same");
return 0;
}