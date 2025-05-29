#include<stdio.h>
int main(){
     int arr[10]={95,90,31,25,100,50,15,89,97,30};
   for(int i=0;i<=9;i++){
    if(arr[i]<35){
    printf("marks %d and his roll no is %d\n",arr[i],i);
    }
   }
  return 0;
}