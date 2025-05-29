#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,5,8,9,3,10};
    int x;
    cout<<"enter a number: ";
    cin>>x;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<","<<arr[j];
            }
           }
         cout<<"\n";
    }
    return 0;
}