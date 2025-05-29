// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=4;i>=0;i--){
//        cout<<arr[i]<<" ";
//     }
   
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//    int brr[5];
//    int a=4;
//    for(int i=0;i<5;i++){
       
//             int temp=arr[i];
//             arr[i]=brr[a];
//             brr[a]=temp;
//             a--;
        
//    }
//    for(int i=0;i<5;i++){
//     cout<<brr[i]<<" ";
//    }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
  
    int i=0;
      int j=4;
      while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
          j--;
       }
   
   for(int i=0;i<5;i++){
    cout<< arr[i]<<" ";
   }
}