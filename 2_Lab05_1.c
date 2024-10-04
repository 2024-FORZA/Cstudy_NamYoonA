#include <stdio.h>

int main() {
    int N, prev, first = 1;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        prev = -1;  // 초기값 설정
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            if (num != prev) { // 중복 검사
                if (!first) printf(" "); // 첫 번째 숫자가 아닐 때 공백 출력
                printf("%d", num);
                prev = num; // 이전 숫자 업데이트
                first = 0; // 첫 번째 숫자 출력 완료
            }
        }
        printf(" $ \n"); // 형식에 맞게 출력
        first = 1; // 다음 케이스를 위해 초기화
    }
    return 0;
}
