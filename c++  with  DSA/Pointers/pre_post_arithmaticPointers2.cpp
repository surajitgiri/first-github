#include<iostream>
using namespace std;
int main(){
    int arr[2]={5,4};
    int *ptr=&arr[0];

    // cout<<(*ptr)++<<endl;    // value change hoy

     cout<<*ptr++<<endl;   // location update hoy //*ptr=*ptr+1

    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<*ptr;
   
    return 0;
}