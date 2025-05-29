#include<iostream>
#include<vector>
using namespace std;            // unstable sorting algorithm
void SelectionSort(vector<int>&v){      //max  swap in selection sort -> O(N)
    int n=v.size();
    for(int i=0;i<n-1;i++){
       
       //finding min element in unsorted array
       int min_index=i;

        for(int j=i+1;j<n;j++){
            if(v[min_index]>v[j]){
                min_index=j;
              }
            }
        // placing min element at beginning
        if(i!=min_index){
            swap(v[i],v[min_index]);
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    SelectionSort(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}