#include<stdio.h>
int main(void){ //9883843797
  int a[5]={3,6,9,12,15};
  int i,j,k;
  i=++a[0];
  j=a[4]++;
  k=a[i++];
  printf("%d %d %d",i,j,k);

}