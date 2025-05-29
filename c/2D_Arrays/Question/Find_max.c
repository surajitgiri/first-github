#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3]={3,4,5,6,78,9,1,23,45};
    int max=INT_MIN;
    int row=0;
    int column=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
               row=i;
               column=j;
            }
        }
    }
    printf("%d\n",max);
    printf("and it's location is (%d %d):\n",row,column);
    return 0;
}