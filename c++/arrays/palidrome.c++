#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3,2,1};
     for(int i=0;i<7;i++){
        bool flag=false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                flag=true;
            }
        }
        if(flag==false){
            cout<<"the unic number is:"<<arr[i];
            break;
        }
     }
}



