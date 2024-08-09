#include <stdio.h>

int main() {
    int A, B, C;

    // A, B, C를 입력받음
    scanf("%d %d %d", &A, &B, &C);

    // (A+B)%C를 출력
    printf("%d\n", (A + B) % C);

    // ((A%C) + (B%C))%C를 출력
    printf("%d\n", ((A % C) + (B % C)) % C);

    // (A×B)%C를 출력
    printf("%d\n", (A * B) % C);

    // ((A%C) × (B%C))%C를 출력
    printf("%d\n", ((A % C) * (B % C)) % C);

    return 0;
}
