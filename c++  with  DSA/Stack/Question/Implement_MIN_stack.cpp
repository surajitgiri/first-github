//  #include<iostream>
//  #include<stack>
//  using namespace std;
//  class MinStack{
//     public:
//      stack<pair<int, int>>s; // val , minVal
//     MinStack(){

//     }

//     void push(int  val){
//         if(s.empty()){
//             s.push({val , val});
//         }
//         else{
//             int minVal = min(val , s.top().second);      //time complexcity O(1)   space complexcity(2N)
//             s.push({val , minVal});
//         }
//     }
//     void pop(){
//         s.pop();
        
//     }
//     int top(){
//         return s.top().first;
//     }
//     int GetMin(){
//         return s.top().second;
//     }

// };
// int main(){
  
//     return 0;
// }


// alternative method


#include<iostream>
 #include<stack>
 using namespace std;
 class MinStack{
    public:
     stack<long long int> s;
     long long int MinVal ;
    MinStack(){

    }

    void push(int  val){
       if(s.empty()){
            s.push(val);
            MinVal = val;
       }
       else{
         if(val < MinVal){
            s.push((long long)2*val - MinVal);
            MinVal = val;
         }
         else{
            s.push(val);
         }
       }
    }
    void pop(){
      if(s.top() < MinVal){
        MinVal = 2*MinVal - s.top();
      }

      s.pop();
        
    }

    int top(){
       if(s.top() < MinVal){
        return MinVal;
       }
       return s.top();
    }

    int GetMin(){
       return MinVal;
    }

};
int main(){
  
    return 0;
}