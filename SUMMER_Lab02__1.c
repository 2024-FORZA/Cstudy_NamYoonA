#include <stdio.h>

void print_stars(int N) {
    for (int i = 1; i <= N; i++) {
        // 공백 출력
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        // 줄 바꿈
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N); // 숫자를 입력 받습니다.
    print_stars(N);  // 별을 출력합니다.
    return 0;
}
