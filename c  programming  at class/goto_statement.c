#include <stdio.h>

int main() {
    int i = 0;

    start: // label
        if (i < 5) {
            printf("%d\n", i);
            i++;
            goto start; // jumps to the label 'start'
        }

    printf("Done\n");

    return 0;
}
