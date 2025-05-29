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

// // Function to print the linked list
// void print(Node* head) {
//     while (head != nullptr) {
//         cout << head->data << " ";
//         head = head->next; 
//     }
//     cout << endl;
// }

Node* reverseLL(Node* head){            // time complexcity O(N)  and space complexcity O(1)
    if(head == NULL || head->next == NULL){
        return head;
    }
   Node* newHead = reverseLL(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

bool isPalindrome(Node* head){
        if(head == NULL || head->next == NULL){
            return true;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
    Node* newHead = reverseLL(slow->next);
    Node* first = head;
    Node* second = newHead;

    while(second != NULL){
        if(first->data != second->data){
            reverseLL(newHead);
            return false;
        }
        first= first->next;
        second = second->next;
    }
    reverseLL(newHead);
    return true;
}

int main() {
    vector<int> arr = {1,2,3,2,1};
    Node* head = convertArr2LL(arr);
   cout<<isPalindrome(head);
   

    return 0;
}
