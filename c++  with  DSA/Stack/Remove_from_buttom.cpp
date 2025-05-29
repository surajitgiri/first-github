#include<iostream>
#include<stack>
using namespace std ;

void insertAt(stack<int>&st , int x , int idx){
    stack<int> temp;
    int n = st.size();
    int count = 0;
    while( count < n-1){   
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();

    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}


// Recursive solution

void f(stack<int>&st ){
    int n = st.size();
    if(st.size() == 1 ){
       st.pop();
         return;
    }
    int curr =  st.top();
    st.pop();
    f(st);
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
    
    //insertAt(st, 10 ,2);

    f(st);

    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;

}