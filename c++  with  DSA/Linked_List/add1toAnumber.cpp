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
int addHelper(Node* temp){
    if(temp==NULL){
        return 1;
    }
    int carry = addHelper(temp->next);
    temp->data += carry;
    if(temp->data < 10) return 0;
    temp->data = 0;
    return 1;

}
Node* AddOne(Node* head){       //time complexcity O(N) ....... space complexcity  O(N)
    int carry = addHelper(head);
    if(carry == 1){
        Node* newnode = new Node(1);
        newnode->next = head;
        head = newnode;
    }
    return head;
}
int main(){
    vector<int>arr={2,3,5,8};
    Node* head = ConvertArrtoLL(arr);
    head = AddOne(head);
    print(head);
    return 0;
}