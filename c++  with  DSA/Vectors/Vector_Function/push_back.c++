#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >vec;
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back(25);  // here last ke ander push hote hay
    for(int i:vec){
        cout<<i<<endl;
    }
     cout<<"size after push back = "<<vec.size()<<endl;
    return 0;
}