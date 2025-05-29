#include<stdio.h>
int main(){
     int arr[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
     int sum=0;
     for(int i=0;i<2;i++){
        for(int j=1;j<5;j++){
            sum=arr[i][j]+sum;
          }
    }
     printf("%d" ,sum);
    return 0;
}