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



int main() {
    vector<int> arr1= {5, 8, 7, 9, 6};
    vector<int> arr2= {4, 5, 8, 9, 6, 3};
    Node* head1= convertArr2LL(arr1);
    Node* head2 = convertArr2LL(arr2);
   // head = RotateLL(head, 3);
   // print(head);
    return 0;
}
