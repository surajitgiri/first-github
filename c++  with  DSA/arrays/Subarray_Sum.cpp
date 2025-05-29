#include<iostream>      //  Brute force approach
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int maxSum=INT16_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr[end];
            maxSum=max(currsum,maxSum);
        }
    }
    cout<<"max subarray sum = "<<maxSum<<endl;
   return 0;
}


