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

// Delete the tail node
Node* DeleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    Node* previous = tail->back;
    previous->next = nullptr;
    delete tail;
    return head;
}

// Delete the head node
Node* DeleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    delete temp;
    return head;
}

// Delete the k-th node from the list
Node* Delete_Kth_Element(Node* head, int k) {
    if (head == nullptr) return nullptr;

    int cnt = 1;
    Node* knode = head;

    // Traverse to the k-th node
    while (knode != nullptr && cnt < k) {
        knode = knode->next;
        cnt++;
    }

    // If k is out of bounds
    if (knode == nullptr) return head;

    // Handle cases where k-th node is head or tail
    if (knode->back == nullptr) return DeleteHead(head);
    if (knode->next == nullptr) return DeleteTail(head);

    // Remove the k-th node
    Node* previous = knode->back;
    Node* front = knode->next;
    previous->next = front;
    front->back = previous;

    delete knode;
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
int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArrToDLL(arr);
    head=insertBeforeHead(head, 10);
    print(head); // Expected output: 5 8 7

    return 0;
}
     