#include<stdio.h>
int main (){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int d=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf("  ");
        }
        int y=1;
        for(int k=1;k<=d;k++){// either use k<=2*i-1;
    int z=y+64;
  
   printf("%c ",(char)z);
  y++;
}
            d=d+2;
        printf("\n");
    }
    return 0;
}
