#include <stdio.h>

int main() {
    int N, x, sum = 0;
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &x);
        sum += x - 1;
    }
    printf("%d", sum + 1);
    return 0;
}
