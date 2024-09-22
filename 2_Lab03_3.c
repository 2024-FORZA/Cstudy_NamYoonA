#include <stdio.h>

int main() {
    int T, C;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &C);
        printf("%d %d %d %d\n", C / 25, (C % 25) / 10, (C % 25 % 10) / 5, C % 5);
    }

    return 0;
}
