// #include<iostream>
// #include<Vector>
// using namespace std;
// int main(){
//     int arr[]={1,0,1,0,0,1,0,1,0,1,0};
//     for(int i=0;i<11;i++){
//         for(int j=0;j<11;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<11;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



#include<iostream>  //using pointers -> Good question
#include<Vector>
using namespace std;
void shorting(vector<int>&v){
    int zero_count=0;
    for(int ele:v){
        if(ele==0){
            zero_count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zero_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of the vector: ";
    cin>>n;
    vector<int >v;
    for(int i=0;i<n;i++){
       int ele;cin>>ele;
        v.push_back(ele);
    }

    shorting(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}