#include<iostream>
#include<stack>
using namespace  std;
int main(){
    stack<int>st;
   // st.pop();
    st.push(5);
    st.push(4);
    st.push(78);
    st.push(9);
    st.push(10);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}