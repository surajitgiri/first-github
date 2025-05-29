    //using recursion

#include<iostream>
using namespace std;
int sumofdigit(int n){
    if(n==0) return 0;
    return (n%10)+sumofdigit(n/10);
}
int main(){
      int n,digit;
    cout<<"enter a number: ";
    cin>>n;
   
    cout<<sumofdigit(n);

    return 0;
}


    // normal method
    
// #include<iostream>
// using namespace std;
// int main(){
//       int n,digit;
//     cout<<"enter a number: ";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         digit=n%10;
//         sum+=digit;
//         n=n/10;
//     }
//     cout<<sum;

//     return 0;
// }
