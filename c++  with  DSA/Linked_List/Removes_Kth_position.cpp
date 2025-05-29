#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
        Node* head=new Node(arr[0]);
        
        Node* mover =head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
                mover->next =temp;
                mover=temp;
        }
        return head;
}

void print(Node* head){
        while(head!= NULL){
            cout<<head->data<<" ";
            head=head->next;

        }
        cout<<endl;
    }

Node* removeK(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;

    }
    int cnt=0;
    Node* temp=head;
    Node* previous=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            previous->next=previous->next->next;
            free(temp);
            break;

        }
        previous=temp;
        temp=temp->next;

    }
    return head;
}

int main(){
    vector<int>arr={2,5,8,7};
    Node* head =convertArr2LL(arr);
    head=removeK(head,3);
    print(head);
  

    return 0;
}