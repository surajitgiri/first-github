#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,9};
    // int*ptr=&arr[0];
    // cout<<ptr<<" "<<*ptr<<endl;
    // cout<<arr<<" "<<*arr<<endl;

    // cout<<*(arr+0)<<endl;
    // cout<<*(arr+1);

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}