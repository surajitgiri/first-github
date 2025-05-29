#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
 
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        sum += arr[i] * arr[i + 1];
    }

    printf("Sum of product of consecutive numbers: %d\n", sum);
    free(arr);
    return 0;
}
  
 