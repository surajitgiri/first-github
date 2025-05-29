#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool    isisomorphic(string s1, string s2) {
    //create frequency array
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);

      //if length are different for s1,s2 toh return false
    if(s1.length()!=s2.length()){
       return false;
    }
    
     // store frequency of charecters in s1 and s2
     for(int i=0;i<s1.length();i++){
        if(v1[s1[i]] != v2[s2[i]]){
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
     }
     return true;
}

int main(){

    string s1,s2;
    cin>>s1>>s2;
    if(isisomorphic(s1,s2)){
        cout<<"Isomorphic";
    }
    else cout<<"Not Isomorphic";
    return 0;
}


// time complexcity -> O(length of the array)
// space complexcity -> O(256)