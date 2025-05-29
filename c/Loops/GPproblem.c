#include<stdio.h>
int main(){
    float n,k;//n time print hobe
    printf("Enter n_th term: of GP:");
    scanf("%f",&n);
    float a;//a=first term in GP|
    printf("Enter first term of GP:");
    scanf("%f",&a);
    printf("Enter common ratio of GP:" );
    scanf("%f",&k);
    for(int x=1;x<=n;x++){
        printf("%f ",a);
        a=a*k;
    }
    return 0;
}

// for(int x=1;x<=n;x++){
//     printf("%f ",a);
//     a*=k;
// }