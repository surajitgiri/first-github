#include<iostream>
using namespace std;

class node{
      public:
      int data;
      node* next;

      node(int val){
        data = val;
        next = NULL;
      }
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* head = new node(x);
        if(front == NULL){
            back = head;
            front = head;
        }
        back->next = head;
        back = head;
    }

    void pop(){
        if(front == NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
        node* todelete = front;
         front = front->next;
         delete todelete;
    }

    int peak(){
        if(front == NULL){
            cout<<"Queue underflow"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }

};
int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();

    return 0;
}