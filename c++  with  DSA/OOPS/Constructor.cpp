#include<iostream>
using namespace std;
class Car{
    public:
            string name;
            int price;
            int seats;

           Car(){      // Default constructor

           }

         Car(string s , int r ,int g){  // parameterised constructor
            name = s;       // it is not neccessary that total class type must be = total call here
            price = r;
            seats = g;
         }
    };

int main(){
    
    Car c1("HONDA",150000, 8);

    Car c2;         // this give me error if i cann't initialize the default constructor
    c2.name = "toyota";
    c2.price = 1500000;
    c2.seats = 8;
    
    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.seats;

    return 0;
}