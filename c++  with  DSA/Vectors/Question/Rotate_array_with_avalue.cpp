// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={2,8,9,6,4,2};
//     int rotate;
//     cout<<"enter rotate number: ";
//     cin>>rotate;
//     for(int i=0,j=5;i<6,j>rotate+1;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
//  for(int j=0;j<6;j++){
//     cout<<arr[j]<<" ";
//  }
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int k;
    cout<<"enter rotate number: ";
    cin>>k;
    // k can be greater than size
    k=k%size;
    int ansarr[5];
    int j=0;
    // inserting last k element in ansarr
for(int i=size-k;i<=size;i++){
    ansarr[j++]=arr[i];
}
    //inserting first size-k  elements in ansarr
for(int i=0;i<=k;i++){
    ansarr[j++]=arr[i];
}
for(int i=0;i<size;i++){
    cout<<ansarr[i]<<" ";
}
    return 0;
}
