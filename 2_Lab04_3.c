#include <stdio.h>

int main() {
    int T, score, sum;
    char quiz[81];
    scanf("%d", &T);

    while (T--) {
        scanf("%s", quiz);
        score = sum = 0;
        for (int i = 0; quiz[i]; i++) {
            if (quiz[i] == 'O') score++;
            else score = 0;
            sum += score;
        }
        printf("%d\n", sum);
    }

    return 0;
}
