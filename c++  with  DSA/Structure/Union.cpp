#include<iostream>
using namespace std;
union money{
    int rice;
   char car;
    float pounds;
   
};

int main(){
  union  money m1;
  union money m2;
  m2.car='b';
    m1.car='m';
    //m1.pounds=856.5;
    cout<<m1.car<<endl;
      cout<<m2.car<<endl;
   // cout<<m1.pounds<<endl;
    return 0;
}
