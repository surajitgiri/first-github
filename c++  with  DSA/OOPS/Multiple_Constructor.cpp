#include<iostream>
using namespace std;
class Car{
    public:
            string name;
            int price;
            int seats;

           Car(){      // Default constructor

           }

           Car(int s){

           }

         Car(string n , int p ){  
            name = n;     
            price = p;
           
         }

         Car(string n ,int p ,int s){       // multiple constructor
            name = n;
            price = p;
            seats = s;
         }

         Car(int s, int p ,string n){     // constructor overloading
            name = n;
            price = p;
            seats = s;
         }
    };

int main(){
    
    Car c1("HONDA",150000);
    c1.seats = 6;


    Car c2;         
    c2.name = "toyota";
    c2.price = 1500000;
    c2.seats = 8;
    
    Car c3("TATA", 102026, 10);      
    
    Car c4(7);

    Car c5(6,580000,"Hayundi");

    Car c6=c1;   // DEEP COPY   // Copy constructor
    c6.name = "surajit";

    Car c7(c1); // DEEP COPY
    c7.name = "ALLU ARJUN";

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<endl;
    cout<<c4.name<<" "<<c4.price<<" "<<c4.seats<<endl;
    cout<<c5.name<<" "<<c5.price<<" "<<c5.seats<<endl;
    cout<<c6.name<<" "<<c6.price<<" "<<c6.seats<<endl;
    cout<<c7.name<<" "<<c7.price<<" "<<c7.seats<<endl;

    return 0;
}