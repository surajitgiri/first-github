#include<iostream>
#include<stack>
using namespace std;

void insertAtButtom(stack<int>&st , int x){
    stack<int>temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr = temp.top();  // time complexcity O(N)
                                // space complexcity  O(N)
        temp.pop();
        st.push(curr);
    }
   
}

void f(stack<int>&st  , int x){
    if(st.empty()){
        st.push(x);
         return;
    }
    int curr =  st.top();
    st.pop();
    f(st,100);
    st.push(curr);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> res;

    //stack<int> res = copyStack(st);

   // insertAtButtom(st , 10);

    f(st,100);

    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}