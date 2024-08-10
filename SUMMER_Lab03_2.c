#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // 중간 값을 찾기 위한 조건문들
    if ((A >= B && A <= C) || (A >= C && A <= B)) {
        printf("%d\n", A);
    }
    else if ((B >= A && B <= C) || (B >= C && B <= A)) {
        printf("%d\n", B);
    }
    else {
        printf("%d\n", C);
    }

    return 0;
}
