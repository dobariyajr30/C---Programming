#include <stdio.h>

int main() {
    int i, j, l;

    printf("\nEnter Limit => ");
    scanf("%d", &l);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                // Print numbers for odd positions
                printf("%d", j);
            } else {
                // Print characters for even positions
                printf(" %c", 'A' + (j / 2) - 1);
            }

            if (j < i * 2) {
                // Print space between characters and numbers
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
