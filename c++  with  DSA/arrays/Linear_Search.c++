#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
 int arr[]={4,2,7,8,1,2,5};
 for (int i=0;i<7;i++){
    if(arr[i]==n){
        cout<<"the index number of the element is :"<<i;
        break;
    }
 }


}