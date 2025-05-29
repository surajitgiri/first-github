#include<iostream>
using namespace std;

class stack{
    int capacity;
    int* arr;
    int top;
 public:
    stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    
void push(int data){
        if(this->top == this->capacity-1){
            cout<<" overflow" <<endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

int pop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return INT16_MIN;
        } 
        this->top--;
    }
int GetTop(){
        if(this->top == -1){
            cout<<"Underflow\n"<<endl;
            return INT8_MIN;
        }
        return this->arr[this->top];
    }

bool isEmpty(){
    return this->top == -1;
}

bool isFull(){
    return this->top == this->capacity-1;
}

int size(){
    return this->top+1;
}
};
int main(){
    stack st(5);
    st.push(5);
    st.push(4);
    st.push(78);
    st.push(9);
    st.push(10);
    // cout<<st.GetTop()<<endl; 
    // cout<<st.size()<<endl;
    // cout<<st.isFull()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    return 0;
}
