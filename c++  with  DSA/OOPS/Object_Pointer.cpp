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

void Change(Cricketer * c){
    (*c).avg = 58;
}
int main(){
     Cricketer c1( "virat kohli", 25000,55.2);
    Cricketer c2("Rohit sharma", 20000, 47.8);

    // cout<<c1.avg<<endl;
    // Change(&c1);
    // cout<<c1.avg<<endl;

   Cricketer* p1 = &c1;
   cout<<p1->runs<<endl;
   p1->avg = 100;
   cout<<c1.avg<<endl;
    return 0;
}
