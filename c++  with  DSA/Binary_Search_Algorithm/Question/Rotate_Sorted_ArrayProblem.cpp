#include<iostream>
#include<vector>
using namespace std;
 int FindMinimumRotateSortedArray(vector<int>&input ){
    if(input.size()==1) return input[0];
    int lo=0,hi=input.size()-1;
    if(input[lo]<input[hi]) return lo; // as this is the sorted array
    
    while(lo<=hi){    
        int mid=lo+(hi-lo)/2;
        if(input[mid]<input[mid-1]) return mid;
        
        if(input[mid]>input[mid+1]) return mid+1;
        if(input[lo]<input[mid]){
          lo=mid+1;
        }
        else {
              
            hi=mid-1;
        }
        
    }
    return -1;
   
}
int main(){
   int n;
   cout<<"enter array size: ";
   cin>>n;
   vector<int>input(n);
   for(int i=0;i<n;i++){
    cin>>input[i];
   }
   cout<< "the smallest element is: "<<FindMinimumRotateSortedArray(input);
    return 0;
}