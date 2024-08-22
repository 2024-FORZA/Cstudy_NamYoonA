#include <stdio.h>
#include <string.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {
        char result[81];
        scanf("%s", result);

        int score = 0, current_streak = 0;
        for (int i = 0; i < strlen(result); i++) {
            if (result[i] == 'O') {
                current_streak++;
                score += current_streak;
            }
            else {
                current_streak = 0;
            }
        }

        printf("%d\n", score);
    }

    return 0;
}
