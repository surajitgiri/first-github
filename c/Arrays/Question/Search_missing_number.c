// #include<stdio.h>
// int main(){
//     int arr[5]={1,21,3,21,21};
//     int x=21;
//     int check=0;    //0 means the element is not present
//     for(int i=4;i>=0;i--){
//         if(arr[i]==x){
//             check=1;    //1 means the element is not present
//         break;
//         }
//         }
//     if(check==0){
//         printf("%d the number is not present in the array",x);
//     }
//     else{
//         printf("%d the number is present in the array",x);
//     }
    
//     return 0;
// }

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={1,21,3,21,21};
    int x=21;
    int idx=0;
    bool flag=false;    //false means the element is not present
    for(int i=4;i>=0;i--){
        if(arr[i]==x){
            idx=i;
            flag=true;    //true means the element is not present
        break;
        }
        }
    if(flag==false){
        printf("%d  number is not present in the array\n",x);
    }
    else{
        printf("%d  number is present in the array and it's index is\n : %d",x,idx);
    }
    
    return 0;
}