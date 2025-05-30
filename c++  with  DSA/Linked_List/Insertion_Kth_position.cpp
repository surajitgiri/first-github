#include<iostream>         /*data - next*/
using namespace std;

 class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
   };

   void insertAtHead(Node* &head, int val){
    Node* new_node=new Node(val);
    new_node->next = head;
    head =new_node;
   }

   void insertAtTail(Node* &head ,int val){

    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // temp has reached last node
    temp->next=new_node;
}

   void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
   }

int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    return 0;
}