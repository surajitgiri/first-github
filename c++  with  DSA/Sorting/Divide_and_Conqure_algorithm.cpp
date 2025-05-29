#include<iostream>      //divide & conqure method
#include<vector>
using namespace std;
void  mergesort(vector<int>&v , int f, int l ){
                //base case
                if(l>=f) return;
                int mid =(f+l)/2;
                mergesort(v,f,mid);
                mergesort(v,mid+1,l);
               // merge(v,f,mid,l);
                return;

}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergesort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}