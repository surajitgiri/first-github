#include<iostream>
#include<vector>
using namespace std;
void  insertionsort(vector<int>&v){
   int n=v.size();
   for(int i=1;i<n;i++){
    int curr =v[i];
    int j=i-1;
    while (j>=0 && v[j]>curr){      // beter than selection sort
        v[j+1]=v[j];                   // stable sort
        j--;
    }
    v[j+1] =curr;
   }
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

    insertionsort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}