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

Node* RearrangeSumOdd(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

   Node* odd = head;
   Node* even = head->next;
   Node* evenHead = head->next;
   while (even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
   }
   odd->next = evenHead;
   

    return head;
}


void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
        vector<int>arr={2,4,6,8,10,12};
        Node* head = convertArrToDLL(arr);
         head = RearrangeSumOdd(head);
        print(head);
    return 0;
}