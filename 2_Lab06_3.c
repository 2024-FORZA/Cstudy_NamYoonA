#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0; // 1�� �Ҽ��� �ƴ�
    for (int i = 2; i * i <= num; i++) { // ������ ��� i * i ���
        if (num % i == 0) return 0; // ������ �������� �Ҽ��� �ƴ�
    }
    return 1; // �Ҽ���
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
