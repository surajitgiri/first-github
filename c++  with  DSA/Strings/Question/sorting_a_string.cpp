#include<iostream>
using namespace std;
int main(){
    string str="codingwallah";
    int n=sizeof(str)/sizeof(str[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(int(str[j])>int(str[j+1])){
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
    return 0;
}