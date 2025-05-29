// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec(5,23);
//     for(int i:vec){
//         cout<<i<<endl;
//     }
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={'a','b','c','d','e'};
cout<<"size = "<<vec.size()<<endl;
        for(char val:vec){
        cout<<val<<endl;
    }
    return 0;
}
