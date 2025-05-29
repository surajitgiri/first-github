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

Node* reverseLL(Node* head) { // Time complexity O(N), Space complexity O(1)
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    while (temp != NULL) {
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node* getKthNode(Node* temp, int k) {
    k -= 1;
    while (temp != NULL && k > 0) {
        k--;
        temp = temp->next;
    }
    return temp;
}

Node* K_reverse(Node* head, int k) {
    Node* temp = head; // ✅ FIXED LINE
    Node* prevLast = NULL;
    while (temp != NULL) {
        Node* kThNode = getKthNode(temp, k);
        if (kThNode == NULL) {
            if (prevLast) prevLast->next = temp;
            break;
        }
        Node* nextNode = kThNode->next;
        kThNode->next = NULL;
        Node* reversedHead = reverseLL(temp); // ✅ store new head of reversed group
        if (temp == head) {
            head = reversedHead;
        }
        else {
            prevLast->next = reversedHead;
        }
        prevLast = temp;
        temp = nextNode;
    }
    return head;
}

int main() {
    vector<int> arr = {5, 8, 7, 9, 6, 3, 4, 2, 5, 7};
    Node* head = convertArr2LL(arr);
    head = K_reverse(head, 3);
    print(head);
    return 0;
}
