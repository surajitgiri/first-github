#include<bits/stdc++.h>
using namespace std;
//int hash[10000000];          // globally initializing 10^7

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin>> arr[i];
    }

    //precompute
    int hash[13] = {0};

    //int hash[1000000];          // when use in this into the main function  10^6

    for(int i = 0;i < n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
}