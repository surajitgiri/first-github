#include<iostream>
using namespace std;
class student{
   public:
    int rno;
    string name;

    void display(){
        cout<<name<<" "<<marks<<" "<<rno<<endl;
    }

    student(int rno,string name , float marks){
        this->name = name;
        this->marks = marks;
        this->rno = rno;
    }

    float getmarks(){   // getter
        return marks;
    }

    void setmarks(float m){     //setter
        marks = m;
    }

    private:        //neither accept a value nor  printable
    float marks;
};
int main(){
    student s1(61,"surajitgiri",92.4);
//     s1.rno = 50;
//     s1.name = "surajit giri";

   s1.setmarks(98.5); // this is posiible

    s1.display();

    cout<<s1.getmarks()<<endl;
    return 0;
}