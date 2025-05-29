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
 Node* RemoveDuplicate(Node* head){      // time complexcity O(N) and space complexcity O(1)
    Node* temp = head;
    while(temp != NULL && temp->next  != NULL){
        Node* nextNode = temp->next;
        while(nextNode != NULL && nextNode->data == temp->data){
            Node* Duplicate = nextNode;
            nextNode = nextNode->next;
            free(Duplicate);
        }
         temp->next = nextNode;
         if(nextNode != NULL) nextNode->back = temp;
         temp = temp->next;
    }
    return head;
 }
int main(){
    vector<int>arr={1,1,1,2,3,3};
    Node* head = convertArrToDLL(arr);
   head = RemoveDuplicate(head);
    print(head);
    return 0;
}
