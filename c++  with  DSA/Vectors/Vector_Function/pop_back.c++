#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >vec={2,25};
    cout<<"size = "<<vec.size()<<endl;
    vec.pop_back();  // here last ke ander delete hote hay
    for(int i:vec){
        cout<<i<<endl;
    }
     cout<<"size after push back = "<<vec.size()<<endl;
    return 0;
}