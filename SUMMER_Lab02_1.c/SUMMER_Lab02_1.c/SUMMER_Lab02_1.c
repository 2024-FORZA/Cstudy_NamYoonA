#include <stdio.h>

int main() {
    int A, B, C;

    // A, B, C�� �Է¹���
    scanf("%d %d %d", &A, &B, &C);

    // (A+B)%C�� ���
    printf("%d\n", (A + B) % C);

    // ((A%C) + (B%C))%C�� ���
    printf("%d\n", ((A % C) + (B % C)) % C);

    // (A��B)%C�� ���
    printf("%d\n", (A * B) % C);

    // ((A%C) �� (B%C))%C�� ���
    printf("%d\n", ((A % C) * (B % C)) % C);

    return 0;
}
