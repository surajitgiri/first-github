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

Node*  MergeTwoLL(Node* head1 , Node* head2){
    Node* dummy = new Node(0); // 0 is a placeholder value  ....... important concept
    Node* t1 = head1;
    Node* t2 = head2;
    Node* temp = dummy;
    while(t1 != NULL && t2 != NULL){
        if(t1->data < t2->data){
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else{       
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if(t1) temp->next = t1;
    else temp->next = t2;

    return dummy->next;

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
