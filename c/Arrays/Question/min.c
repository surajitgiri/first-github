#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={200,4,2,800,19,5,12};
    int min=arr[0]; // largest no. is present here total computers
    for(int i=0;i<=6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}