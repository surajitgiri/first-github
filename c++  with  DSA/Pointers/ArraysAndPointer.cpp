#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5};
    // // int*ptr=&arr[0];
    //  int *ptr=(arr+2);
    // cout<<*ptr<<endl;
    // *ptr++;
    // cout<<*ptr<<"\n";
    // *ptr--;
    // cout<<*ptr<<"\n";

    int arr[3]={11,12,13};
    int (*p)[3]=&arr;
    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<"\n";
    return 0;
}