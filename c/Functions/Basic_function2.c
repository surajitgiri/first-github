#include<stdio.h>
int main(){
    void india();
    india();//calling india
    
    return 0;
}
void england(){
    printf("you are in england\n");
    return 0;
}
void australia(){
    printf("you are in australia\n");
    england();
    return;
}
    void india(){
    printf("you are in india\n");
    australia();
    
    return;
}
