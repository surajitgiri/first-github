// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int >v={2,5,6,8,9,7,5,4,1,3};
//     int x;
//     cout<<"enter a number: ";
//     cin>>x;
//     for(int i=0;i<10;i++){
//         for(int j=i+1;j<10;j++){
//             if(v[i]+v[j]==x){
//                  cout<<v[i]<<","<<v[j];
//             }
//            }
//          cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >v={1,2,3,4,5,6,7,8,9,10};
    int x;
    cout<<"enter a number: ";
    cin>>x;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                 if(v[i]+v[j]+v[k]==x){
                 cout<<v[i]<<" "<<v[j]<<" "<<v[k];
               }
            }
           cout<<endl;
           }
         
    }
    return 0;
}