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

// Function to insert at the head of the linked list
Node* insertHead(Node* head, int val) {
    return new Node(val, head);
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    head = insertHead(head, 15);
    print(head);

    return 0;
}
