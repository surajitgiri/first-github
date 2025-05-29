// #include<iostream>
// #include<vector>
// using namespace std;
// int maximum1(vector<vector<int>>&v){
//     int maxones=INT16_MIN;
//     int maxonerows=-1;
//     int columns=v[0].size();
//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v[i].size();j++){
//             if(v[i][j]==1){
//                int numberOfOnes=columns-j;
//                 if(numberOfOnes>maxones){
//                     maxones=numberOfOnes;
//                     maxonerows=i;
//                 }
//                 break;
//             }
            
//         }
//     }
//     return maxonerows;
// }
 
// int main(){
//     int n,r;
//     printf("enter row size: ");
//     scanf("%d",&n);
//      printf("enter column size: ");
//     scanf("%d",&r);
//    vector<vector<int>>vec(n,vector<int>(r));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<r;j++){
//             cin>>vec[i][j];
//         }
//     }
//     int res=maximum1(vec);
//     cout<<res<<endl;
//     return 0;

// }



        // allternative method

#include<iostream>
#include<vector>
using namespace std;
int leftmostrows(vector<vector<int>>&v){
    int leftmostone=-1;
    int max1row=-1;
    // finding leftmost one in 0th row
    for(int j=v[0].size()-1;j>=0;j--){
        if(v[0][j]==1){
            leftmostone =j;
            }
        else{
            break;
        }
    }
}
int maximum1(vector<vector<int>>&v){
    int maxones=INT16_MIN;
    int maxonerows=-1;
    int columns=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v[i].size();j++){
            if(v[i][j]==1){
               int numberOfOnes=columns-j;
                if(numberOfOnes>maxones){
                    maxones=numberOfOnes;
                    maxonerows=i;
                }
                break;
            }
            
        }
    }
    return maxonerows;
}
 
int main(){
    int n,r;
    printf("enter row size: ");
    scanf("%d",&n);
     printf("enter column size: ");
    scanf("%d",&r);
   vector<vector<int>>vec(n,vector<int>(r));
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            cin>>vec[i][j];
        }
    }
    int res=maximum1(vec);
    cout<<res<<endl;
    return 0;

}




