#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#include<math.h>
int main(){
 int arr[3][2]={{1,2},{2,3},{3,4}};
 int sum=0;
 int sum1=0;
 int sum2=0;
 for(int i=0;i<1;i++){
    for(int j=0;j<2;j++){
        sum+=arr[i][j];
    }
 }
  for(int i=1;i<2;i++){
    for(int j=0;j<2;j++){
        sum1+=arr[i][j];
    }
 }
     for(int i=2;i<3;i++){
    for(int j=0;j<2;j++){
        sum2+=arr[i][j];
    }
 }
      printf("sum of the first rows : %d\n" ,sum);
     printf("sum of the second rows : %d\n" ,sum1);
     printf("sum of the third  rows : %d\n" ,sum2);
    return 0;
}