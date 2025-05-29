#include<stdio.h>
int main(){
    char name[20];
    int i=0;
    printf("enter a name: ");
    scanf("%s",&name);
    printf("%s",name);
    for(int i=0;name[i]!='\0';i++){
        name[i]=name[i]+1;
    }
    printf("encrypted name=%s \n",name);
    for(int i=0;name[i]!='\0';i++){
        name[i]=name[i]-1;
    }
    printf("decrypted name=%s \n",name);
    return 0;
}