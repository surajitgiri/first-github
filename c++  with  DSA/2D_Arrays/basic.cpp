#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[2][3]={{2,3,6},{5,6,9}};
   
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr[i][j]*=2;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}