#include<stdio.h>
int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr[][3]={1,2,3,4,5,6,7,8,9};  // it's possible 
    // arr[0][0]=56;
    // arr[0][1]=69;
    // arr[1][0]=10;
    // arr[1][1]=23;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}