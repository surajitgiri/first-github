#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

};
class Stack{
    Node* head ;
    int capacity;
    int CurSize;
    public:
    Stack(int c){
        this->capacity = c;
        this->CurSize = 0;
        head = NULL;
    }
    bool IsEmpty(){
        return this->head == NULL;
    }
    bool IsFull(){
        return this->capacity == this->CurSize;
    }
    void push(int data){
        if(this->capacity == this->CurSize) {
            cout<<"overflow"<<endl;
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        CurSize++;

    }
    int pop(){
        if(head == NULL){
            cout<<"underflow";
            return INT8_MIN;
        }
        Node* newHead = head->next;
        head->next = NULL;
       Node* ToBeRemoved = head;
     int result = ToBeRemoved->data;
        head = newHead;
       delete(ToBeRemoved);
        CurSize--;
        return result;
    }
    int size(){
        return CurSize;
    }
    int GetTop(){
        if(head == NULL){
            cout<<"underflow"<<endl;
            return INT8_MIN;
        }
        return head->data;
    }
};
int main(){
    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(78);
    st.push(9);
    st.push(10);
    cout<<st.GetTop()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.GetTop()<<endl;
    cout<<st.size()<<endl;

    return 0;
}