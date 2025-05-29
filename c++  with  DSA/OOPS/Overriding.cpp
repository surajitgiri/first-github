
#include<iostream>
#include<vector>
using namespace  std;  // difference between function overloading and function overriding

class scooty{       // parent class
public:
    int topspeed;
    float mileage;
   virtual void sound(){       // use virtual
        cout<<"vroom vroom"<<endl;
    }
private:
    int bootspace;
};

class Bike : public scooty{    //child class
public:
      int Gears;
      void sound(){
        cout<<"Droom Droom"<<endl;
      }
};

class SuperBike : public scooty{    //child class
    public:
          int Gears;
          void sound(){
            cout<<"Zroom Zroom"<<endl;
          }
    };


int main(){
//     Bike* b = new Bike();
//     b->sound();
//    scooty *s = new scooty();
//    s->sound();
  
    scooty* b = new Bike();
   b->sound();

     scooty *c  = new SuperBike();
     c->sound();
    vector<scooty*>v;
    return 0;
}