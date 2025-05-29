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

Node* insertLast(Node* head ,int val){
    if(head==NULL) {
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode = new Node(val);
    temp->next = newnode;
    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
   head=insertLast(head,500);
    print(head);

    return 0;
}
