#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>&arr ,int target){
    int lo=0,hi=arr.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
       if(arr[mid]>=target){
        ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}

int UpperBound(vector<int>&arr ,int target){
    int lo=0,hi=arr.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>target){
            ans=mid;
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
    cout<<"enter array size";
    cin>>n;
std::vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"enter target element: ";
cin>>target;
std::vector<int >result;
   int lb=lowerBound(arr,target);
   if(arr[lb]!=target){
    result.push_back(-1);
    result.push_back(-1);
   }
   else{
    int ub=UpperBound(arr,target);
    result.push_back(lb);
    result.push_back(ub-1);
   }
   cout<<result[0]<<" "<<result[1]<<"\n";
    return 0;
}