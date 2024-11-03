#include <stdio.h>

int main() {
    int n, score = 0, bonus = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int result;
        scanf("%d", &result);

        if (result == 1) {
            bonus++;
            score += bonus;
        }
        else {
            bonus = 0;
        }
    }

    printf("%d\n", score);
    return 0;
}
