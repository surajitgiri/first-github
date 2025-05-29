#include<iostream>
using namespace  std;

class vehicle{       // parent class
public:
    int topspeed;
    float mileage;
    string Fuel;
};

class TwoWheeler : public vehicle{  // child class / derived class
    public:
};

class FourWheeler : public vehicle{     // child class / derived class
    public:

};

class Scooty : public TwoWheeler{     // child class / derived class
    public:

};

class Bike : public TwoWheeler{    //child class
public:
      int Gears;
};

int main(){
    Bike b1;
  

    return 0;
}