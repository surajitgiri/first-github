#include<iostream>
using namespace std;
class Cricketer{
    public:
       int runs;
       int wickets;
       float average;
};

class Engineer{
    public:
      int experience;
      string domain;

};

class Phodu :public Engineer,Cricketer{    // multiple inheritance
    public:
    string name;
};
int main(){

    return 0;
}