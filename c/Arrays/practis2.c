#include<stdio.h>
#include<stdbool.h>
int main(){
 int x=5;
 int d=1;
 for(int i=1;i<=5;i++){
  for(int j=1;j<=5-i;j++){
    printf("  ");
  }
  int y=1;
  for(int k=1;k<=d;k++){
    int z=y+64;
    printf("%c ",(char)z);
    y++;
  }
  d=d+2;
  printf("\n");
  
 }
  return 0;
}