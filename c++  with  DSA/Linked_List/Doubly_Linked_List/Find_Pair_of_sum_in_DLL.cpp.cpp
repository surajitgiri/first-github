#include<bits/stdc++.h>
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

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
    
 Node* findTail(Node* head){
            Node* tail = head;
            while(tail != NULL){
                tail = tail->next;
            }
            return tail;
    }
vector<pair<int,int>>  FindPair(Node* head , int sum){
    vector<pair<int , int>>ans;
    if(head == NULL) return ans;
    Node* left = head;
    Node* right = findTail(head);
    while(left->data < right->data){
            if(left->data + right->data  == sum){
                ans.push_back({left->data , right->data});
                left = left->next;
                right = right->next;
            }
            else if(left->data + right->data < sum){
                left = left->next;
            }
            else right = right->next;
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,9};
    Node* head=convertArrToDLL(arr);
   FindPair(head,5);
    print(head);
    return 0;
}