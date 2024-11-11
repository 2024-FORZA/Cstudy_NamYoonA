#include <stdio.h>

// Rev 함수: 주어진 정수의 자릿수를 뒤집는 함수
int Rev(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int X, Y;

    // 입력 받기
    scanf("%d %d", &X, &Y);

    // Rev(X)와 Rev(Y)를 계산
    int revX = Rev(X);
    int revY = Rev(Y);

    // Rev(X) + Rev(Y)를 계산
    int sum = revX + revY;

    // 최종 결과인 Rev(sum)를 계산
    int result = Rev(sum);

    // 결과 출력
    printf("%d\n", result);

    return 0;
}
