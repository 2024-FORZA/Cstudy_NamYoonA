#include <stdio.h>

int main() {
    int dwarfs[9], sum = 0, i, j;


    for (i = 0; i < 9; i++) {
        scanf("%d", &dwarfs[i]);
        sum += dwarfs[i];
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            if (sum - dwarfs[i] - dwarfs[j] == 100) {
                dwarfs[i] = dwarfs[j] = -1; // 제외할 난쟁이 표시
                break;
            }
        }
        if (dwarfs[i] == -1) break;
    }

    for (i = 0; i < 9; i++) {
        if (dwarfs[i] != -1) {
            printf("%d\n", dwarfs[i]);
        }
    }

    return 0;
}
