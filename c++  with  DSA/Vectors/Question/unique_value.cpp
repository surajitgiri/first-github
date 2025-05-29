#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={3,1,2,1,2};
    //int vec[]={1,2,3,2,1};
    int size=5;
    for(int i=0;i<size;i++){
        bool flag=false;
        for(int j=i+1;j<size;j++){
            if(vec[i]==vec[j] ){
                flag=true;
            }
        }
        if(flag==false){
            cout<<"the unique number is: "<<vec[i];
            break;
        }
    }
    return 0;
}


// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     // vector<int>vec={3,1,2,1,2};
//     int vec[]={1,2,3,2,1};
//     int size=5;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(vec[i]==vec[j] ){
//                 vec[i]=vec[j]=-1;
//             }
//         }
//       }
//     for(int i=0;i<size;i++){
//         if(vec[i]>0){
//             cout<<vec[i];
//         }
//       }
//     return 0;
// }