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
        printf("n�� 0���� 20 ������ ���̾�� �մϴ�.\n");
    }

    return 0;
}
