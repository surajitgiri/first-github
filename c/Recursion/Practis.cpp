#include<iostream>
using namespace std;

        int climbStairs(int n) {
            if (n == 0 || n == 1) {
                return 1;
            }
            int prev = 2, curr = 1;
            for (int i = 2; i <= n; i++) {
                int temp = curr;
                curr = prev + curr;
                prev = temp;
            }
            return curr;
        }
    
    int main(){
        int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",climbStairs(a));
    return 0;
        return 0;
    }