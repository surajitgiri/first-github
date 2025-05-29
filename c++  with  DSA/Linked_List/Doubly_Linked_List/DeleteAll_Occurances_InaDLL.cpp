#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node* back;

    public:
    Node(int data1 , Node* next1 , Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertArrToDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i], nullptr ,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* DeleteKeyNode(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){ 
        if(temp->data == key){
            if(temp == head){
                head = head->next;
            }
            Node* newNode = temp->next;
            Node* prevNode = temp->back;
            if(newNode) newNode->back = prevNode;
            if(prevNode) prevNode->next = newNode;
            free(temp);
            temp = newNode;
           

        }
        else{
            temp = temp->next;
        }
    }
    return head;

}
int main(){
    vector<int>arr={4,10,8,9,10,14,10};
    Node* head=convertArrToDLL(arr);
   head=DeleteKeyNode(head,10);
    print(head);
    return 0;
}