#include<iostream>
#include<vector>
using namespace std;
int firstOccurance(vector<int>&input, int target){
    // time: O(logn)
    // space: O(1)
    int lo=0 , hi=input.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(input[mid]==target){
            ans=mid;
            hi=mid-1;
        }
        else if(input[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
   cout<<"enter array size: ";
   cin>>n;
   vector<int>input(n);
   for(int i=0;i<n;i++){
    cin>>input[i];
   }
   int target;
   cout<<"enter target value: ";
   cin>>target;
   cout<<firstOccurance(input,target)<<"\n";
    return 0;
}