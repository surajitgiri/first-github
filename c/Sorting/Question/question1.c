
#include<stdio.h>
int main(){
    int arr[9]={5,0,2,0,0,4,1,3,0};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]==0){       // using buble short
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
      for(int i=0;i<9;i++){
     
           printf("%d ",arr[i]);
      
      }

    return 0;
}