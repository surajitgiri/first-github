// #include<iostream>
// using namespace std;
// int swap(int x,int y){
//      x=x+y;
//    y=x-y;
//    x=x-y;
//    cout<<"your swap code is: "<<x<<" "<<y;
//    return 0;
// }
// int main(){
//     int x,y;
//     cout<<"enter two number:";
//     cin>>x;
//     cin>>y;
//   swap(x,y);
// }


#include<iostream>
using namespace std;
void swap(int& x,int& y){   // it's called as pass by refference
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"enter two number:";
    cin>>x;
    cin>>y;
  swap(x,y);
   cout<<"your swap code is: "<<x<<" "<<y;
}