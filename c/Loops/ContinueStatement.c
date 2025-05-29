#include<stdio.h>
int main(){
    for(int x=1;x<=100;x++){
       if(x%2!=0){
        
        continue;
        
       }
        printf("%d ",x);
    }
    return 0;
}