#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagrame(string s1,string s2){
    //create freq array
    vector<int>freq(26,0);


    //if length are different for s1,s2 toh return false
    if(s1.length()!=s2.length()){
        return false;
    } 
    // store frequency of charecters in s1 and s2
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;  //for s1, we are incrementing freq of char
        freq[s2[i]-'a']--;  // for s2, we are decrementing freq of char
    }

    //checking if freq of every charecter is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){ //not anagram
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagrame(s1,s2)){
        cout<<"string are anagrame";
    }
    else{
         cout<<"string are not anagrame";
    }
    return 0;
}

// time complexcity -> O(length of the array)
// space complexcity -> O(26)