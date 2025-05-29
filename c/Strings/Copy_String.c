#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="college wallah";
    int i=0;
    int size=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
   printf("the size is : %d\n",size);
    char s2[size];
    for(int j=0;j<size;j++){
        s2[j]=s1[j];    // it's called as deep copy
        }
    printf("%s",s2);
    return 0;
}

                    //alternative 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[13]="surajit giri";
//     char s2[13];
//     strcpy(s2,s1);
//     printf("%s",s2);
//     return 0;
// }