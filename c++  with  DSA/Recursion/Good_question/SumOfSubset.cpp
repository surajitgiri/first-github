#include<iostream>
#include<vector>
using namespace std;
void  SumOfSubset(int *arr,int n,int idx,int sum, vector<int> &result){
        if(idx==n){
            result.push_back(sum);
            return;
        }
        SumOfSubset(arr, n, idx+1, sum+arr[idx], result);
        SumOfSubset(arr,n,idx+1,sum,result);
 }
int main(){
  int arr[]={2,4,6};
  vector<int>result;
  SumOfSubset(arr,3,0,0,result);
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
    return 0;
}