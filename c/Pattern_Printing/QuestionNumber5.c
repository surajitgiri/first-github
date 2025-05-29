#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){//if you want to print a triangel then use this | 
                //if you want to print reverse triangel then use j<=n-i+1;  |

            int d=a+64;     //if you want to print square then use j<=n;
            char ch=(char)d;
           // printf("%d \n",j);
            printf("  %c ",ch);
            a++;
 }
 printf("\n");
        }
    return 0;
}