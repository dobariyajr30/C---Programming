#include <stdio.h>

int main() {
    int i, j, l;

    printf("\nEnter Limit => ");
    scanf("%d", &l);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 == 0) {

                printf("%c ", 'A' + j - 1);
            } else {

                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
