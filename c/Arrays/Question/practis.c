#include<stdio.h>
void swap(int arr[]){
   int temp=arr[0];
   arr[0]=arr[1];
   arr[1]=temp;
}
int main(){
   int arr[2]={1,2};
   swap(arr);
   printf("%d %d",arr[0],arr[1]);
   return 0;
}