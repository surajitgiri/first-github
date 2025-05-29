#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int arr2[3][2]={{1,2},{3,4},{5,6}};
    int rc=3;
     int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=0;
            for(int k=0;k<3;k++){
                res[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}