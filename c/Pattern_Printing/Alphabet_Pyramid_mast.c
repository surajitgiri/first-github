#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char)(k+64);
            printf("%c ",ch);
        }
        int a= i-1;
        for(int y=i-1;y>=1;y--){
        char ch=(char)(y+64);
            printf("%c ",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}


