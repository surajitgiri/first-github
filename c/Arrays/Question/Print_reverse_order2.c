#include<stdio.h>
void reverse(int arr[],int a,int b){
        for(int i=a,j=b;i<=j;i++,j--){      // important
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        return;
}
int main(){
    int n;
    printf("enter the size of Array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("how many element change you:");
    scanf("%d",&k);
    k=k%n;
  reverse(arr,0,n-1);
  reverse(arr,0,k-1);
  reverse(arr,k,n-1);
    
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
