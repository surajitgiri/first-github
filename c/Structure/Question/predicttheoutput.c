#include<stdio.h>
struct book{
    char name[25];
    char auther[25];
    int callno;
};
void display(struct book*);     // it's called as function prototype
int main(){
    struct book b1={"let us c","YPK",101};
    display(&b1);
    return 0;
}
void display(struct book*b){
    printf("%s %s %d\n",b->name,b->auther,b->callno);
}