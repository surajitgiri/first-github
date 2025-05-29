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
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);

}


// Node* insertBeforeHead(Node*head , int val){
//     Node* newHead = new Node(val ,head ,nullptr);
//     head->back = newHead;

//     return newHead;
// }

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArrToDLL(arr);
    deleteNode(head->next);
    print(head); // Expected output: 5 8 7

    return 0;
}
