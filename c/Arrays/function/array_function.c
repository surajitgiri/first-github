#include<stdio.h>
void fun(int arr[]){
    
    arr[0]=10;
    arr[1]=67;
    return ;
}
int main(){
    int arr[2]={3,6};
    printf("%d %d \n",arr[0],arr[1]);
    fun(arr);
 printf("%d %d",arr[0],arr[1]);
    return 0;
}