#include<stdio.h>
#include<math.h>
void main(){
        int n,x,y;
        printf("enter a value: ");
        scanf("%d",&x);
        printf("enter case no: ");
        scanf("%d",&n);
        switch(n){
            case 1: y=1+x;
            break;
            case 2: y=1+(x*x);
            break;
            case 3: y=1+(x*x*x);
            break;
           default: y=1+(x*x)+pow(x,4);
        }   // end of switch
        printf("%d",y);
    
}       // end of main