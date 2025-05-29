#include<iostream>
#include<vector>
using namespace std;

//  int BinarySearch(vector<int>&input , int target){
//         //define serach space 
//         int lo=0; //Start of the search space 
//         int hi=input.size() -1; //end of the search space 
//         while(lo<= hi){
//             // calculate the mid point for the search space 
//             int mid=(lo+hi)/2;
//             if(input[mid]==target) return mid;
//             else if(input[mid]<target){
//                 // discard the left side
//                 lo = mid +1;
//             }
//             else{
//                 // discard the right of the mid
//                 hi = mid-1;
//             }
//         }
//          return -1;
//     }


 int BinarySearchRecursive(vector<int>&input , int target,int lo,int hi){
    if(lo>hi) return -1;
    int mid=lo+(hi-lo)/2; // mid=(hi+lo)/2;
    if(input[mid]==target) return mid;
    if(input[mid]<target){
        return BinarySearchRecursive(input,target,mid+1,hi);
    }
    else{
         return BinarySearchRecursive(input,target,lo,mid-1);
    }
 }
 // time complexcity: O(logn)
 //space: O(logn)

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
   cout<<BinarySearchRecursive(input,target,0,n-1)<<"\n";
    return 0;
}
