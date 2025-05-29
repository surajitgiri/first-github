#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* FindNthNode(Node* temp , int n){
        int cnt = 1;
        while(temp != NULL){
            if(cnt == n) return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
}
Node* RotateLL(Node* head , int k){
    int len = 1;
    Node* tail = head;
    while(tail->next != NULL){
        len++;
        tail = tail->next;
    }
    if(k % len == 0){
        return head;
    }
    k = k % len;
    tail->next = head;
    Node* newLastNode = FindNthNode(head , len - k);
    head = newLastNode->next;
    newLastNode->next = NULL;
    return head;
}

int main() {
    vector<int> arr = {5, 8, 7, 9, 6};
    Node* head = convertArr2LL(arr);
    head = RotateLL(head, 3);
    print(head);
    return 0;
}
