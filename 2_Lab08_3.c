#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // 사람 수 입력 받기

    int weight[50], height[50], rank[50];

    // 몸무게와 키 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &weight[i], &height[i]);
        rank[i] = 1; // 초기 등수를 1로 설정
    }

    // 덩치 등수 계산
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++;
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d ", rank[i]);
    }

    return 0;
}
