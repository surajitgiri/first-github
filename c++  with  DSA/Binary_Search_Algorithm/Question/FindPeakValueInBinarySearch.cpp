#include<iostream>
#include<vector>
using namespace std;
int Findpeakvalue(vector<int>&input){
    int lo=0,hi=input.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(input[mid]>input[mid-1]){    // this update version is present in -> FindPeakValueInBinarySearch2.c
            ans=mid;
        lo=mid+1;
        }
        else{
            hi=mid-1;
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
 
   cout<< "the target element is: "<<Findpeakvalue(input);
    return 0;
}