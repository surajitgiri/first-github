#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor for a single value
    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    // Constructor for inserting at head
    Node(int data1, Node* nextNode) {
        data = data1;
        next = nextNode;
    }
};

// Function to convert an array into a linked list
Node* convertArr2LL(vector<int>& arr) {
    Node* head=new Node(arr[0]);
        
        Node* mover =head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
                mover->next =temp;
                mover=temp;
        }
        return head;
}

// Function to print the linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertPosition(Node* head, int ele, int k){
    if(head==NULL){
        if(k==1){
            return new Node(ele);
        }
        else{
            return head;
        }
    }
    if(k==1){
       return new Node(ele,head);
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(ele,temp->next);
            temp->next=x;
            break;

        }
        temp=temp->next;
    }
    return head;
    
}
int main() {
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    head=insertPosition(head,15,3);
    print(head);

    return 0;
}
