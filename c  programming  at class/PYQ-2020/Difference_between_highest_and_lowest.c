#include<stdio.h>
int f(int n){
    int temp=n;
    int digit=0;

  while(temp!=0){
    temp/=10;
    digit++;
  }
    int arr[digit];
    for(int i=0;i<digit;i++){
        arr[i]=n%10;
        n=n/10;
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<digit;i++){
        if(max<arr[i]){
        max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return max-min;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n<0) printf("kindly! enter a positive number: ");
    else printf("%d",f(n));
    return 0;
}