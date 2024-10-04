#include <stdio.h>

int main() {
    int N, M, P[10], max_digit = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d", &P[i]);
    scanf("%d", &M);

    for (int i = 1; i < N; i++) if (P[i] <= M) max_digit = i;
    if (max_digit == 0) max_digit = (P[0] <= M) ? 0 : -1;

    char result[50] = { 0 };
    for (int i = 0; M > 0; ) {
        for (int j = N - 1; j >= 0; j--) {
            if (P[j] <= M && (i > 0 || j > 0 || max_digit != -1)) {
                result[i++] = '0' + j;
                M -= P[j];
                break;
            }
        }
    }
    printf("%s\n", result);
    return 0;
}
