#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >vec;
    vec.push_back(0);
    vec.push_back(25);
    vec.push_back(8);
    // vec.push_back(9);
    // vec.push_back(4);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;    
    return 0;
}
