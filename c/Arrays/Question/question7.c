#include<stdio.h>
int main(){
    int arr[6]={1,3,5,7,9,11};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<=5;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];     // the difference between sumof index even
               //and sumof index odd
        }
        else
        sumodd=sumodd+arr[i];
    }
    printf("%d",sumeven-sumodd);
    return 0;
}