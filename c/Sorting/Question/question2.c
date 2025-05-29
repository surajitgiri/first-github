#include<stdio.h>
int main(){
    int arr[6]={8,9,6,7,4,3};
    int sum=0;
    for(int i=0;i<6;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}