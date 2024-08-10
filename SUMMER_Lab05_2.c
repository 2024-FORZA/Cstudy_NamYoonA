#include <stdio.h>

int main() {
    int N, v, count = 0;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    scanf("%d", &v);
    for (int i = 0; i < N; i++) {
        if (numbers[i] == v) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
