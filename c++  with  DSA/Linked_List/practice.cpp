// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* back;
//     Node* next;

//     public:
//       Node(int data1 ,Node* next1,Node* back1 ){
//             data=data1;
//             next=next1;
//             back=back1;
            
//       }

//       public:
//       Node(int data1){
//         data=data1;
//         next=nullptr;
//         back=nullptr;
//       }

// };

// Node* arrtoDLL(vector<int>&arr){
//     //if (arr.empty()) return nullptr;

//         Node* head=new Node(arr[0]);
//         Node* prev=head;
//         for(int i=1;i<arr.size();i++){
//             Node* temp=new Node(arr[i],nullptr, prev);
//             prev->next=temp;
//             prev=temp;
//         }
//         return head;

// }
// void print(Node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// int main(){
//     vector<int>arr={12,25,36,9};
//     Node* head=arrtoDLL(arr);
//     print(head);
//     return 0;
// }


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
Node* FindMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    vector<int>arr={2,3,5,8};
    Node* head = ConvertArrtoLL(arr);
   //head = FindMiddle(head);
    print(FindMiddle(head));
    return 0;
}