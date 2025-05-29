#include<stdio.h>
int main(){
     int arr1[2][2]={4,6,8,9};
     int arr2[2][2]={5,6,7,8};
    //  int result[2][2];   // use of extra matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            // result[i][j]=arr1[i][j]+arr2[i][j];
            arr1[i][j]=arr1[i][j]+arr2[i][j]; // with out use of extra matrix
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           printf("%d ",arr1[i][j]);
        }
         printf("\n");
    }
   return 0;
}