#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
   int  arr[11]={6,1,7,3,2,5,4,8,11,9,10};
//    for(int i=0;i<11;i++){
//     for(int j=i+1;j<11;j++){
//         if(arr[i]+arr[j]==x){
//             printf("(%d %d)\n",arr[i],arr[j]);
//         }
//     }
//    }
int i=0;
int j=x-1;
while(i<j){
    if(arr[i]+arr[j]==x){
        printf("(%d %d)\n",arr[i],arr[j]);
       
       
    }
    else if(arr[i]+arr[j]>x) j--;
    else i++;
}




//    int sum=0;
//    for(int i=0;i<11;i++){
//     sum=sum+arr[i];
//    }
//    int sum2=55;
//    printf("%d\n",sum);
//    printf("the duplicate number is: %d",sum-sum2);

    return 0;
}