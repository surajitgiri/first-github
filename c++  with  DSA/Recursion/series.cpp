#include<iostream>
using namespace std;    // 1-2+3-4+5-............
int sum(int n){
   if(n==0) return 0;
   return  ((n%2 == 0) ? (-n) : (n) ) + sum(n-1) ;
  
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//   int  n=5;
//   int sum=0;
//     for(int i=1;i<=5;i++){
//         if(i%2==0){
//             sum=sum-i;
//         }
//         else{ sum=sum+i;}
//     }
//     cout<<sum;
//     return 0;
// }