#include<iostream>
#include<string>
using namespace std;
void selectionsort(char fruit[][60], int n){
        for(int i=0;i<n-1;i++){
            //finding the min element 
            int minidx=i;
            for(int j=i+1;j<n;j++){
                if(strcmp(fruit[minidx],fruit[j])>0){
                    minidx=j;
                }
            }
            //place ihe min element at the  beginning
            if(i!=minidx){
                swap(fruit[i],fruit[minidx]);
                
            }
        }
        return;
}
int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    
    selectionsort(fruit,n);
    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    }cout<<endl;
    return 0;
}