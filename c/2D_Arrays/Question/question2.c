#include<stdio.h>
int main(){
     int arr[3][4]={{0,1,1,0},{0,0,0,1},{1,1,1,0}};
     int sum=0;
     int sum1=0;
     int sum2=0;
     for(int i=0;i<1;i++){
       for(int j=0;j<4;j++){
            sum=arr[i][j]+sum;
       }
    }
    for(int i=1;i<2;i++){
       for(int j=0;j<4;j++){
            sum1=arr[i][j]+sum1;
       }
    }
    for(int i=2;i<3;i++){
       for(int j=0;j<4;j++){
            sum2=arr[i][j]+sum2;
       }
    }
    if(sum>sum1 && sum>sum2){
     printf("the first rows contains more '1' value  and the sum of the rows is  : %d\n" ,sum);
    }
    if(sum1>sum2 && sum1>sum){
     printf("the second rows contains more '1' value  and the sum of the rows is : %d\n" ,sum1);
    }
    if(sum2>sum1 && sum2>sum){
     printf("the thired rows contains more '1' value  and the sum of the rows is : %d\n" ,sum2);
    }
    return 0;
}