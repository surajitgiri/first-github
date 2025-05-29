#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==0 && v[right_ptr]%2!=0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++; right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2!=0){
            right_ptr--;
        }
    }
}
int main(){
    int n; 
    cout<<"Enter vector size: "; 
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;cin>>ele;
        v.push_back(ele);
    }
     sorting(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int even=0;
//     int odd=0;
//     for(int i=0;i<6;i++){
//        if(arr[i]%2==0){
//         even=arr[i];
//        }
//        else{
//         odd=arr[i];
//        }
//     }
//     for(int i=0;i<6;i++){
//         cout<<even<<" ";
//     }
//     return 0;
// }