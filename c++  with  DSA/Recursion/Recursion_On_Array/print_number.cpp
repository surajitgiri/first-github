#include<iostream>
using namespace std;
void array(int *arr,int idx,int n){
    if(idx==n) return ;
    cout<<arr[idx]<<endl;
    array(arr,idx+1,n);

}
int main(){
    int arr[]={1,2,3,4,5,6};
   array(arr,0,6);
    return 0;
}