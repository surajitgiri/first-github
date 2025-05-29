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

    
};
int main(){
     Cricketer c1( "virat kohli", 25000,55.2);
    Cricketer* c2 = new Cricketer("Rohit sharma", 20000, 47.8);

    cout<<c1.runs<<" "<<c1.name<<endl;
    cout<<c2->avg<<" "<<c2->name<<endl;


    // int*ptr = new int(2583);    // dynamic memory allocation
    // cout<<*ptr<<endl;
    return 0;
}
