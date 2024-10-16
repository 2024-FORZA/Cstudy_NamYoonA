#include<stdio.h>
#include<string.h>

int main() {
    while (1) {
        char inputString[101] = { 0, };  // 문자열 입력 배열
        scanf("%[^\n]s", inputString);  // 개행 문자 전까지 입력받음

        // 빈 줄이 입력되면 종료
        if (inputString[0] == '\0')
            break;

        int lowercaseCount = 0, uppercaseCount = 0, digitCount = 0, spaceCount = 0;

        // 문자열의 각 문자를 순회하며 카운트
        for (int i = 0; i < strlen(inputString); i++) {
            if (inputString[i] == 32) // 공백
                spaceCount++;
            else if ((48 <= inputString[i]) && (inputString[i] <= 57)) // 숫자
                digitCount++;
            else if ((65 <= inputString[i]) && (inputString[i] <= 90)) // 대문자
                uppercaseCount++;
            else if ((97 <= inputString[i]) && (inputString[i] <= 122)) // 소문자
                lowercaseCount++;
        }

        // 결과 출력
        printf("%d %d %d %d\n", lowercaseCount, uppercaseCount, digitCount, spaceCount);
        scanf("%*c");  // 개행 문자 제거
    }

    return 0;
}
