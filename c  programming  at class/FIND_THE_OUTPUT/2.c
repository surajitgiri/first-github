#include<stdio.h>
void f(int* p, int*q){
    p=q;
    *p=2;
}
int main(){
    int i=0,j=1;
    f(&i,&j);
    printf("%d %d\n",i,j);
    return 0;
}