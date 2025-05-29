#include<iostream>
using namespace std;
class fraction{
    public:
    int num;
    int den;
    fraction(int num, int den){
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<"/ "<<den<<endl;
    }
    fraction operator+(fraction f){
        int newNum = this->num*f.den + this->den*f.num;
        int newDeN = this->den*f.den;
        // for(int i=1;i<10;i++){
        //     if(newNum%i==0 && newDeN%i==0){
        //         newNum/=i;
        //         newDeN/=i;
        //     }
        // }
        
        fraction ans(newNum , newDeN);
        return ans;
    }
};
int main(){
    fraction f1(2,3);
    fraction f2(4,3);
    f1.display();
    f2.display();
    // fraction f3 = f1.add(f2);
    fraction f3 = f1+f2;
    f3.display();
    return 0;
}