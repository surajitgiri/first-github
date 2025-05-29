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

Node* Remove_Nth_element_from_end(Node* head , int n){
               Node* fast = head;
               Node* slow = head;
               for(int i=0;i<n;i++) fast = fast->next;
               if(fast == NULL) return head->next;

               while(fast->next != NULL){
                    fast = fast->next;
                    slow = slow->next;
               }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);
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
    vector<int>arr={1,2,5,8,9,6};
    Node* head = convertArrToDLL(arr);
     head = Remove_Nth_element_from_end(head,6);
    print(head);
return 0;
}