#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >v={1,2,3,6,8,9,7,5};
    int sumodd=0;
    int sumeven=0;
    for(int i:v){
        if(i%2==0){
            sumeven+=i;
        }
    }
    for(int j:v){
        if(j%2!=0){
            sumodd+=j;
        }
    }
    cout<<sumeven-sumodd;                                               
    return 0;
}