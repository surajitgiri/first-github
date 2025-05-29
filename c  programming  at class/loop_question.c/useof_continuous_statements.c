#include<stdio.h>
int main(){
    int sum,count,numbers;
    for(int i=1;i<=2;i++){
        sum=0;
        count=0;
        printf("enter five number of set %d: \n",i);
        for(int j=1;j<=5;j++){
            scanf("%d ",&numbers);
            if(numbers<0)
            continue;
            count++;
            sum+=numbers;
        }
        printf("sum of %d +ve numbers in set %d=%d\n",count,i,sum);
    }
    return 0;
}