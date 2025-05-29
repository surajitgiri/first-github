#include<iostream>
using namespace std;
int arm(int n){
    if(n==0) return 0;
    return ((n%10)*(n%10)*(n%10))+arm(n/10);
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==arm(n)){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
    return 0;
}