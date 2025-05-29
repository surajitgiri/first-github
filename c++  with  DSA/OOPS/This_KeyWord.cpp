#include<iostream>
using namespace std;
class Cricketer{
    public:
    
    string name;
    int runs;
    float avg;

    Cricketer(string name , int runs, float avg){ // 'this' use when  class and constructor er initialization same hoy
          this->name = name;
          this->runs = runs;
          this->avg = avg;
    }

    // void print(){       // function into class
    //     cout<<name<<" "<<runs<<endl;
    // }

    // void print(int runs){       // when a value pass through the function == class defined same hole
    //     cout<<this->name<<" "<<this->runs<<endl;
    // }

    int matches(){
        return runs/avg;
    }
};

int main(){
     Cricketer c1( "virat kohli", 25000,55.2);
    Cricketer c2("Rohit sharma", 20000, 47.8);

   //c1.name = "sachin";

    //  c1.print();    //   c1.print(5);
    //  c2.print();    //   c2.print(6);

    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
    return 0;
}
