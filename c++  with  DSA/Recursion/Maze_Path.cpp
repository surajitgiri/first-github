#include<iostream>
using namespace std;
int NoOfWays(int cr, int cc,int er, int ec){
    int downways=0;
    int rightways=0;
        if(cr==er and cc==ec) return 1;
        if(cr==er){
            rightways+=NoOfWays(cr,cc+1,er,ec);
        }
        if(cc==ec){
            downways+=NoOfWays(cr+1,cc,er,ec);
        }
        if(cr<er and cc<ec){
            rightways=NoOfWays(cr,cc+1,er,ec);
            downways=NoOfWays(cr+1,cc,er,ec);
        }
        int result=rightways+downways;
        return result;
}
int main(){
    int n,m;
    cout<<"enter row and coulmn number of the maze path: ";
    cin>>n>>m;
   cout<< NoOfWays(1,1,n,m);

    return 0;
}