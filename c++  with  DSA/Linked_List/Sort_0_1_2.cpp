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

Node* convertArrToDLL(vector<int>&arr){         // time complexcity O(2N) and space complexcity O(N)
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
    Node* temp = head;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    while(temp!=NULL){
        if(temp->data == 0) cnt0++;
        else if(temp->data == 1) cnt1++;
        else cnt2++;
        temp = temp->next;
    }
    Node* temp2 = head;
    while(temp2!=NULL){
        if(cnt0) {temp2->data = 0;
            cnt0--;
        }
        else if(cnt1){
            temp2->data = 1;
            cnt1--;
        }
        else{
            temp2->data = 2;
            cnt2--;
        }
        temp2 = temp2->next;
    }
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
        vector<int>arr={0,1,2,1,0,1,2};
        Node* head = convertArrToDLL(arr);
         head = Sort012(head);
        print(head);
    return 0;
}