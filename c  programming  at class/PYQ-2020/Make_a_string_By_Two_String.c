#include<stdio.h>
int main(){
    char str1[100],str2[100],str3[100];

    printf("enter first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("enter second string: ");
    fgets(str2,sizeof(str2),stdin);

    int length1=0 , length2=0,length;
    for(int i=0;str1[i]!='\0';i++){
        length1++;
    }

    for(int i=0;str2[i]!='\0';i++){
        length2++;
    }
    if(length1<length2){
        length=length2;
    }
    else length=length1;

    for(int j=0,i=0;i<length*2;i++){
        str3[j++]=str1[i];
        str3[j++]=str2[i];
        str3[j]='\0';
    }
    printf("%s",str3);
    return 0;
}