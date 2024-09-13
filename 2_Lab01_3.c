#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 2 * N - 1; i++) {
        int stars = i <= N ? i : 2 * N - i;
        int spaces = 2 * (N - stars);

        for (int j = 0; j < stars; j++) printf("*");
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");

        printf("\n");
    }

    return 0;
}
