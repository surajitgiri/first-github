#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int>&input){
    int lo=0,hi=input.size()-1;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(mid==0){
            if(input[mid]>input[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid=hi){
                if(input[mid]>input[mid-1]){
                    return  hi;
                }
                else{
                    return hi-1;
                }
        }
        else{
            if(input[mid]>input[mid+1] and input[mid]>input[mid-1]){
                return mid;
            }
            else if(input[mid]>input[mid-1]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
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
    cout<<"Peak element is: "<<findPeak(input);
    return 0;
}