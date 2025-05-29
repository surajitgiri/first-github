#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node* back;

    public:
    Node(int data1 , Node* next1 , Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArrToDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i], nullptr ,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* reverseDLL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev=NULL;
    Node* current= head;

    while(current!=NULL){
        prev = current->back;

        current->back = current->next;
        current->next=prev;

        current = current->back;
    }
    return prev->back;  // remember this 
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
        vector<int>arr={12,8,46,15};
        Node* head = convertArrToDLL(arr);
         head = reverseDLL(head);
        print(head);
    return 0;
}