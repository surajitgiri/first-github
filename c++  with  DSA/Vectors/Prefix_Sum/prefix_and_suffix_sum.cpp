#include<iostream>
#include<vector>
using namespace std;
bool runningsum(vector<int >&v){
    int total_sum=0;
     for(int i=0;i<v.size();i++){
        total_sum+=v[i];  
    
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){  
       prefix_sum+=v[i];
       //cout<<prefix_sum<<endl;
       int suffix_sum=total_sum-prefix_sum;
       if(suffix_sum==prefix_sum){
        return true;
       }
    }
    return false;
}
int main(){
    vector<int >v;
    int n;
    cout<<"enter array size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
    v.push_back(ele);
    }
    cout<<runningsum(v);

//  for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//  }
  

    return 0;
}