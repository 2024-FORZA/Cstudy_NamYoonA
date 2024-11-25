#include <stdio.h>
#include <string.h>

int main() {
    char input[101]; // 입력 문자열 저장
    char result[101]; // 결과 저장
    int index = 0; // 결과 문자열의 인덱스

    // 입력 받기
    scanf("%s", input);

    // 첫 번째 글자는 결과에 추가
    result[index++] = input[0];

    // 입력 문자열 순회
    for (int i = 1; i < strlen(input); i++) {
        if (input[i] == '-') {
            // 하이픈 다음 글자는 대문자, 결과에 추가
            result[index++] = input[i + 1];
        }
    }

    // 결과 문자열 끝에 널 문자 추가
    result[index] = '\0';

    // 결과 출력
    printf("%s\n", result);

    return 0;
}
