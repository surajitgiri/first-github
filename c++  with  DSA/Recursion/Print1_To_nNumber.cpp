#include<iostream>
using namespace std;
int print1ton(int n){
    if(n==0) return 0;
    print1ton(n-1);
    cout<<n<<"\n";
    

}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    print1ton(n);
    return 0;
}