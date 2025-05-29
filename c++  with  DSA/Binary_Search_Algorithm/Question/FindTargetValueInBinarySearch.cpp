#include<iostream>
#include<vector>
using namespace std;
int SearchMatrix(vector<vector<int >>&a , int target){
    int n=a.size(); //  no of rows
    int m=a[0].size();  // no of cols

    int lo=0,hi=n*m-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int x=mid/m;
        int y=mid%m;
        if(a[x][y]==target){
            return true;
        }
        else if(a[x][y]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>a={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    cout<<"your output is: "<<SearchMatrix(a,target);
    return 0;
}