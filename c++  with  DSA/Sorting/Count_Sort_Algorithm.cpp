#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
        int count=0;
        for(int i=first;i<last;i++){
            if(arr[i]<arr[last]){
                count++;
            }
        }
}
void  countsort(int arr[],int first,int last){
    //base case
    if(first>=last) return;

    //recursive call
    int pi=partition(arr,first,last);
    countsort(arr,first,pi);
    countsort(arr,pi+1,last);
}
int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    countsort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}