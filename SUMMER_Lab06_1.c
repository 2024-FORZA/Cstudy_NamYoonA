#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int min = 1000000;
    int max = 2;

    for (int i = 0; i < count; i++) {
        int divisor;
        scanf("%d", &divisor);

        if (divisor < min) {
            min = divisor;
        }
        if (divisor > max) {
            max = divisor;
        }
    }

    int N = min * max;
    printf("%d\n", N);

    return 0;
}
