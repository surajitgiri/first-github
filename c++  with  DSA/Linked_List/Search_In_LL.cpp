#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
        Node* head=new Node(arr[0]);
        
        Node* mover =head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
                mover->next =temp;
                mover=temp;
        }
        return head;
}
int LengthofLL(Node*head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int checkIfPresent(Node* head ,int val){
    Node* temp=head;
    while(temp){
        if(temp->data == val) return 1;
        temp=temp->next;
   }
   return 0;
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* head =convertArr2LL(arr);
    cout<<checkIfPresent(head,15);
    return 0;
}