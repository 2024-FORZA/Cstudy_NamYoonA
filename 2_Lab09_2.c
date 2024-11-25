#include <stdio.h>

int main() {
    int R, B;
    scanf("%d %d", &R, &B); // 빨간색과 갈색 타일 개수 입력 받기

    // 총 타일 개수 계산
    int totalTiles = R + B;

    // 방의 크기 탐색
    for (int W = 1; W * W <= totalTiles; W++) {
        if (totalTiles % W == 0) { // W가 totalTiles의 약수인지 확인
            int L = totalTiles / W; // L 계산

            // 가장자리 빨간 타일 조건 확인
            if ((L - 2) * (W - 2) == B) {
                printf("%d %d\n", L, W); // 큰 값을 L로 출력
                break;
            }
        }
    }

    return 0;
}
