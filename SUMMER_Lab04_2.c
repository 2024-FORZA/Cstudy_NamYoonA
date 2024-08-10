#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 0 && n <= 20) {
        printf("%llu\n", factorial(n));
    }
    else {
        printf("n은 0에서 20 사이의 값이어야 합니다.\n");
    }

    return 0;
}
