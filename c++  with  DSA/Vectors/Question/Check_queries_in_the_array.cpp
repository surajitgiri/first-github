#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++){       //smaj me nahi aya
        cin>>v[i];
    }

    const int N = 1e5 + 10;

vector<int>freq(N,0);
for(int i=0;i<n;i++){
    freq[v[i]]++;
}

    int q;cout<<"enter queries: ";cin>>q;
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }


    return 0;
}