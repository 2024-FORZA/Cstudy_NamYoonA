#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 0 && n <= 20) {
        printf("%d\n", fibonacci(n));
    }
    else {
        printf("n은 0에서 20 사이의 값이어야 합니다.\n");
    }

    return 0;
}
