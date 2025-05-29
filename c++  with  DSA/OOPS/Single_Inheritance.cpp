#include<iostream>
using namespace  std;

class scooty{       // parent class
public:
    int topspeed;
    float mileage;
private:
    int bootspace;
};

class Bike : public scooty{    //child class
public:
      int Gears;
};

int main(){
    Bike b1;
   b1.topspeed = 180;
   b1.mileage = 12.5;
   b1.Gears = 6;

    return 0;
}