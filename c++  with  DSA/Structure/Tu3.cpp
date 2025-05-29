#include<iostream>
using namespace std;
union money{
    int rice;
   char car;
    float pounds;
   
};

int main(){
    enum Meal {breakfast, lunch, dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    Meal m1= breakfast;
    cout<<m1;

    return 0;
}
