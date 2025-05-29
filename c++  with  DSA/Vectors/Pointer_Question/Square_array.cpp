#include<iostream>
#include<vector>
using namespace std;
void square(vector<int>&v){
 for(int i=0;i<7;i++){
        v[i]=v[i]*v[i];
    }
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(v[i]>v[j]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
}
int main(){
    vector<int>v={-4,5,8,-9,6,7,2};
   square(v);
     for(int i=0;i<7;i++){
        printf("%d ",v[i]);
     }
    return 0;
}