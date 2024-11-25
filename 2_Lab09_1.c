#include <stdio.h>
#include <stdlib.h>

int main() {
    int mushrooms[10];
    int sum = 0, closest = 0;

    // 버섯 점수 입력 받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &mushrooms[i]);
    }

    // 합을 계산하며 100에 가장 가까운 값을 찾음
    for (int i = 0; i < 10; i++) {
        sum += mushrooms[i];

        if (abs(100 - sum) <= abs(100 - closest)) {
            closest = sum;
        }

        if (sum >= 100) {
            break;
        }
    }

    printf("%d\n", closest);

    return 0;
}
