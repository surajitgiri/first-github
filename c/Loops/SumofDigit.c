#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    int sum=0,Lastdigit =0;
    while(x!=0){
        Lastdigit=x%10;
        if(Lastdigit%2!=0)//this is for sum of all even number in the digit ||   if you want to find sum of all odd number in the digit then use the 
        //condition  %2!=0   || if you  want to sum of all number in  digit then remove the condition ||

        sum=sum+Lastdigit;
        x=x/10;
    }
    printf("The sums of digit are:%d",sum);
    return 0;
}