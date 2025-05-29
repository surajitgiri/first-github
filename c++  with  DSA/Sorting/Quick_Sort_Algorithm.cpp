// divide problem into subproblems
//conquer(solve) the subproblem
//combine solutions of subproblems
#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
        int pivot=arr[last]; 
        int i=first-1;          //for inserting elements < pivot
        for(int j=first;j<last;j++){
            if(arr[j]<pivot){
                i++;
               swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[last]);
        return i+1;
}
void Quicksort(int arr[],int first,int last){
    //base case
    if(first>=last){
        return;
    } 
        // recursive case
   int pi=partition(arr,first,last);
    Quicksort(arr,first,pi-1);
    Quicksort(arr,pi+1,last);
   
}
int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}