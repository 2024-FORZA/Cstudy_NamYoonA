#include <stdio.h>
#include <string.h>

int main() {
    char binary[1000001];
    int length, remainder;

    // 2진수 입력 받기
    scanf("%s", binary);

    // 2진수의 길이 확인
    length = strlen(binary);

    // 2진수를 3의 배수로 맞추기 위해 앞에 '0'을 추가
    remainder = length % 3;
    if (remainder == 1) {
        printf("%d", binary[0] - '0');
    }
    else if (remainder == 2) {
        printf("%d", (binary[0] - '0') * 2 + (binary[1] - '0'));
    }

    // 3자리씩 읽어서 8진수로 변환 및 출력
    for (int i = remainder; i < length; i += 3) {
        int octal_digit = (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');
        printf("%d", octal_digit);
    }

    printf("\n");
    return 0;
}
