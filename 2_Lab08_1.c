#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    long long sum = 0;
    long long expected_sum = (long long)(N - 1) * N / 2; // 1부터 N-1까지의 합

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    // 중복된 숫자 M은 실제 합에서 기대 합을 뺀 값
    printf("%lld\n", sum - expected_sum);

    return 0;
}
