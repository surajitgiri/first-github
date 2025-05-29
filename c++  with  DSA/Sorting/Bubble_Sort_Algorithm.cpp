#include<iostream>
#include<vector>
using namespace std;        // stable sorting algorithm
void  bubblesort(vector<int >&v){        //max  swap in bubble sort -> O(N^2)
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                flag=true;
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
            
        }
        if(flag==false) break;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    bubblesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}