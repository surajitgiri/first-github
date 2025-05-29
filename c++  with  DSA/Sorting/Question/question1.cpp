#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int j=n-1;
        while (i<=j && arr[i]==0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}