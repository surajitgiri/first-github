#include<iostream>
#include<vector>
using namespace std;
 int binarySearchRotateArray(vector<int>&input , int target){
        int lo=0, hi=input.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(input[mid]==target) return 1;
           if(input[mid]>=input[lo]){
            if(target >= input[lo] and target<=input[mid]){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
           }
           else{
            if(target>=input[mid] and target<=input[hi]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
           }
        }
        return 0;
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
   cout<<"enter target element: ";
   cin>>target;
   cout<< "the target element is: "<<binarySearchRotateArray(input,target);
    return 0;
}