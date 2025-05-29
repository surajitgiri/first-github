#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,6,5,4};
    int x;
    cout<<"enter a number: ";
    cin>>x;
    for(int ele:v){
        if(ele>x){
            cout<<ele<<endl;
        }
    }
    return 0;
}