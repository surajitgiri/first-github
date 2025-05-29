#include <stdio.h>
#include<stdlib.h>

int main() {
    int n, i, countAbove = 0, countBelow = 0;
    float sum = 0, average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = sum / n;
    printf("Average: %.2f\n", average);

    int *above=(int *)malloc(n* sizeof(int));
    int *below=(int *)malloc(n* sizeof(int));
    
    for (i = 0; i < n; i++) {
        if (arr[i] > average) {
            above[countAbove++] = arr[i];
        } else if (arr[i] < average) {
            below[countBelow++] = arr[i];
        }
    }
    
    printf("Numbers above average: ");
    for (i = 0; i < countAbove; i++) {
        printf("%d ", above[i]);
    }
    printf("\n");
    
    printf("Numbers below average: ");
    for (i = 0; i < countBelow; i++) {
        printf("%d ", below[i]);
    }
    printf("\n");
    
    return 0;
}
