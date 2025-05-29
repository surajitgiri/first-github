#include<stdio.h>
int maze(int n, int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){ // only for right call
        rightways += maze(n,m-1);
    }
    if(m==1){     // only for down call
        downways += maze(n-1,m);
    }
    if(n>1 && m>1){
    rightways += maze(n,m-1);
    downways += maze(n-1,m);
    }
   
    int totalways=rightways+downways;
    return totalways;
}
int main(){
int n;
printf("enter  number of rows of mazepath: ");
scanf("%d",&n);
int m;
printf("enter  number of rows of mazepath: ");
scanf("%d",&m);
int NoOfways=maze(n,m);
printf("%d",NoOfways);
    return 0;
}