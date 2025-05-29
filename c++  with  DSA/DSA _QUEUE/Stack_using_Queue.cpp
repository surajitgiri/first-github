#include"bits/stdc++.h"
using namespace  std;

// class Stack{
//     int N;
//     queue<int> q1;
//     queue<int> q2;

//     public:
//     Stack(){
//         N = 0;

//     }
    
//     void push(int val){
//         q2.push(val);
//           N++;
//            while( !q1.empty()){
//              q2.push(q1.front());
//              q1.pop();
//           }
//           queue<int>temp = q1;
//           q1 = q2;                      
//           q2 = temp;
//     }
//     void pop(){
//         q1.pop();
//         N--;
//     }
//     int top(){
//         return q1.front();
//     }
//     int size(){
//         return N;
//     }
// };

class Stack {
public:
	queue<int> que;
	// Push element x onto stack.
	void push(int x) {
		que.push(x);
		for(int i=0;i<que.size()-1;++i){
			que.push(que.front());
			que.pop();
		}
	}

	// Removes the element on top of the stack.
	void pop() {
		que.pop();
	}

	// Get the top element.
	int top() {
		return que.front();
	}

	// Return whether the stack is empty.
	bool empty() {
		return que.empty();
	}
};
int main(){
     Stack st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);

     cout<<st.top() <<endl;
    return 0;
}