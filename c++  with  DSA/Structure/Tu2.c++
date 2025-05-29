#include<iostream>
using namespace std;
typedef struct employee
{
   int eID;
   string favchar;
    float salary;

}lol;


int main(){
 lol surajit;
    lol rohit;
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