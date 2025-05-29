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

Node* convertArrToDLL(vector<int>&arr){         // time complexcity O(N) and space complexcity O(1)
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i], nullptr ,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* Sort012(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* ZeroHead = new Node(-1);
    Node* OneHead = new Node(-1);
    Node* TwoHead = new Node(-1);

    Node* Zero = ZeroHead;
    Node* One = OneHead;
    Node* Two = TwoHead;
    Node* temp = head;

    while(temp!=0){
        if(temp->data == 0){
            Zero->next = temp;
            Zero = Zero->next;
        }
        else if(temp->data == 1){
            One->next = temp;
            One = One->next;
        }
        else{
            Two->next = temp;
            Two = Two->next;
        }
        temp = temp->next;
    }

    Zero->next = (OneHead->next)? OneHead->next : TwoHead->next;
    One->next = TwoHead->next;
    Two->next = NULL;

    Node* NewHead = ZeroHead->next;

    delete ZeroHead;
    delete OneHead;
    delete TwoHead;

    return NewHead;
}


void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    vector<int>arr={0,2,0,2};
    Node* head = convertArrToDLL(arr);
     head = Sort012(head);
    print(head);
return 0;
}