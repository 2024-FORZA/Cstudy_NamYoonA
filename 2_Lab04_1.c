#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, scores[5];
    scanf("%d", &T);

    while (T--) {
        for (int i = 0; i < 5; i++) scanf("%d", &scores[i]);

        for (int i = 0; i < 4; i++)
            for (int j = i + 1; j < 5; j++)
                if (scores[i] > scores[j]) {
                    int temp = scores[i];
                    scores[i] = scores[j];
                    scores[j] = temp;
                }

        if (scores[3] - scores[1] >= 4)
            printf("KIN\n");
        else
            printf("%d\n", scores[1] + scores[2] + scores[3]);
    }

    return 0;
}
