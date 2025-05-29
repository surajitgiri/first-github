#include<iostream>
using namespace std;
int main(){
    float f=10.5;
    int x=10;
    void *ptr=&f;
    // void *ptr;
//    ptr=&x;

    // cout<<*ptr<<endl;   // void pointers cann't be derefferenced

    float*integerpointer=(float*)ptr;   // this is called type casting

    //  int*integerpointer=(int*)ptr;
   cout<<*integerpointer;
    return 0;
}