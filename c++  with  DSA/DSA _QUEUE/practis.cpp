#include<iostream>
using namespace std;
#define n 20
class queue{
        int* arr;
        int front;
        int back;

        public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }
        void push(int val){
            if(back == n-1){
                cout<<"Queue overflow";
                return;
            }
            back++;
            arr[back] = val;
            if(front == -1){
                front++;
                
            }
        }
        void pop(){
            if(front == -1 || front > back){
                cout<<"Queue underflow";
                return;
            }
            front++;
        }
        int peak(){
            if(front == -1 || front > back){
                cout<<"Queue underflow";
                return -1;
            }
            return arr[front];
        }
        bool empty(){
            if(front == -1 || front > back){
                return true;
            }
            return false;
        }
};
int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    return 0;
}
