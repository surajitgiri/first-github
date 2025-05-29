#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* back;
    Node* next;

    Node(int data1, Node* back1 = nullptr, Node* next1 = nullptr) {
        data = data1;
        back = back1;
        next = next1;
    }
};

// Convert an array into a doubly linked list
Node* convertArrToDLL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty array case

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], prev, nullptr);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Print the doubly linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertBeforeHead(Node* head , int val){
    Node* newHead = new Node(val, head , nullptr);
    head->back=newHead;
    return newHead;
}

Node* insertBeforeTail(Node* head, int val) {
    if (head == nullptr) return new Node(val);  // If the list is empty
    if (head->next == nullptr) return insertBeforeHead(head, val);  // If there's only one node

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    Node* prev = tail->back;
    Node* newNode = new Node(val, prev, tail);  // Corrected order
    prev->next = newNode;
    tail->back = newNode;

    return head;
}

Node* insertBeforeKth_Element(Node* head,int k, int val){

    if(k==1) return insertBeforeHead(head,val);
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(val,prev,temp);
    prev->next=newNode;
    temp->back=newNode;
    return head;
   
}

void insertBeforeNode(Node* node ,int val){
    Node* prev=node->back;
    Node* newNode=new Node(val,prev,node);
    prev->next=newNode;
    node->back=newNode;
}
int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArrToDLL(arr);
    insertBeforeNode(head->next, 100);
    print(head); // Expected output: 5 8 7

    return 0;
}
     