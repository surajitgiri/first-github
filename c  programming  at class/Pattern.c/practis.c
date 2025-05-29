#include<stdio.h>
int main(){
   int n=4;
   int a=1;
   
   for(int i=1;i<=n;i++){
   int b=65;
    for(int k=1;k<=n-i;k++){
        
        printf("  ");
    }
    for(int j=1;j<=a;j++){
         
        // char ch=(char)b;
        printf("%c ",(char)b);
        b++;
       
    }
    printf("\n");
     a+=2;
   }
    return 0;
}