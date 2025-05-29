#include<iostream>
using namespace std;
struct employee
{
   int eID;
   string favchar;
    float salary;

};


int main(){
    struct employee surajit;
    employee rohit;
    surajit.eID=5;
    surajit.favchar="viratkohli";
   surajit.salary=50000000;
    rohit.salary=890000;

   cout<<surajit.salary<<endl;
   cout<<surajit.favchar<<endl;
    cout<<surajit.eID<<endl;
    cout<<rohit.salary;
    
    
    return 0;
}