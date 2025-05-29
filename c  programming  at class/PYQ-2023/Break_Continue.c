#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j == 3) {
                continue; // Skips printing when j is 3
            }
            if (i == 4) {
                break; // Exits inner loop when i is 4
            }
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    
    return 0;
}
