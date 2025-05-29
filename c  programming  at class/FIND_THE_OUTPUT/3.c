#include<stdio.h>
int main(){
    char inchar='A';
    switch(inchar){
        case 'A': printf("choice A\n");
        case 'B':
        case 'C': printf("choice C\n");
        case 'D':
        case 'E':
        default : printf("No Choice\n");

    }
    return 0;
}