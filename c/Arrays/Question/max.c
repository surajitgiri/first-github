// #include<stdio.h>
// int main(){
//     int arr[7]={200,4,2,800,19,5,12};
//     int max=arr[0]; // small no. is stored here must
//     for(int i=0;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={200,4,2,800,19,5,12};
    int max=INT_MIN; // smallest no. is present here total computers
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}