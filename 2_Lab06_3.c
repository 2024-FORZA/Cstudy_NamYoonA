#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0; // 1은 소수가 아님
    for (int i = 2; i * i <= num; i++) { // 제곱근 대신 i * i 사용
        if (num % i == 0) return 0; // 나누어 떨어지면 소수가 아님
    }
    return 1; // 소수임
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (is_prime(num)) count++;
    }

    printf("%d\n", count);
    return 0;
}
