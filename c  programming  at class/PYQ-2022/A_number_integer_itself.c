#include <stdio.h>

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int sum=0,digit;

    while(temp!=0){
        digit=temp%10;
        sum+=digit;
        sum*=10;
        temp/=10;
    }
    sum/=10;

        printf("%d\n",sum);
    if(sum==n) printf("palindrome");
    else printf(" not palindrome");

    return 0;
}
