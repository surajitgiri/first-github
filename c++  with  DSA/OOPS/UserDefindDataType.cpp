#include<iostream>
using namespace std;
class Car{
    public:
            string name;
            int price;
            int seats;

    };

    void print(Car c){
        cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
    }

    void change(Car& c){
        c.name = "AUDI AB";
    }

int main(){
    
    Car c1;
    c1.name = "Honda city";
    c1.price = 100000;
    c1.seats = 8;

    Car c2;
    c2.name = "TOYOTA";
    c2.price = 3600000;
    c2.seats = 6;
    
    Car c3;
    c3.name = "Mercedis";
    c3.price = 8600000;
    c3.seats = 10;
     
    print(c1);
    change(c1); // pass by refference
    print(c1);
    // print(c2);
    // print(c3);
    return 0;
}