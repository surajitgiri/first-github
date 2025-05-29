// #include<iostream>
// using namespace std;
// void swap(int* x,int* y){   // it's called as pass by refference
//    int temp =*x;
//    *x=*y;
//    *y=temp;

// }
// int main(){
//     int x,y;
//     cout<<"enter two number:";
//     cin>>x;
//     cin>>y;
//   swap(&x,&y);
//    cout<<"your swap code is: "<<x<<" "<<y;
// }


#include<iostream>
#include<vector>
using namespace std;
void swap(int*x,int*y){
   int temp=*x;
   *x=*y;
   *y=temp;
}
int main(){
   int x,y;
   cout<<"enter two number: ";
   cin>>x;
   cin>>y;
   swap(&x,&y);
   cout<<"your swap code is: "<<x<<" "<<y;
   return 0;
}