#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,6,8,9,7,4};
    int size=6;
    int max=INT16_MIN;
    int smax=INT16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     for(int j=0;j<size;j++){
            if(arr[j]>smax and arr[j]!=max){
                smax=arr[j];
            }
        }
        cout<<"largest number: "<<max<<endl;
    cout<<"second largest number: "<<smax;
    return 0;
}