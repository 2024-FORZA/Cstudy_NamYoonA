#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    long long sum = 0;
    long long expected_sum = (long long)(N - 1) * N / 2; // 1���� N-1������ ��

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    // �ߺ��� ���� M�� ���� �տ��� ��� ���� �� ��
    printf("%lld\n", sum - expected_sum);

    return 0;
}
