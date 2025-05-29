#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
     int data;
     Node* next;

     Node(int data1){
        data = data1;
        next = nullptr;
     }

     Node(int data1 , Node* nextnode){
        data = data1;
        next = nextnode;
     }
};

Node* ConvertArrtoLL(vector<int>&arr){
        Node* head = new Node(arr[0]);
            Node* mover = head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;

        }
        return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* FindMiddle(Node* head){       // time complexcity O(N/2)  and space complexcity O(1)
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    vector<int>arr={2,3,7,5,8};
    Node* head = ConvertArrtoLL(arr);
   //head = FindMiddle(head);
    print(FindMiddle(head));
    return 0;
}