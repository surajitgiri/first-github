#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int r;
    printf("enter r:");
    scanf("%d",&r);
    int nfac=1;//n!
    int rfac=1;//r!
    int nrfac=1;// (n-r)!
    for(int i=1;i<=n;i++){// er alternative question -> combination 2 e ache ...use of function
        nfac=nfac*i;
    }
    for(int i=1;i<=r;i++){
        rfac=rfac*i;
    }
    for(int i=1;i<=n-r;i++){
        nrfac=nrfac*i;
    }
    int ncr=nfac/(rfac*nrfac);
    printf("your combination value is:%d",ncr);
    return 0;
}