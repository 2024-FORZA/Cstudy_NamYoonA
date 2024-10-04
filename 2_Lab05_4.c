#include <stdio.h>

int main() {
    int M, cup = 1, X, Y;
    scanf("%d", &M);
    while (M--) {
        scanf("%d %d", &X, &Y);
        if (X == cup) cup = Y;
        else if (Y == cup) cup = X;
    }
    printf("%d\n", cup);
    return 0;
}
