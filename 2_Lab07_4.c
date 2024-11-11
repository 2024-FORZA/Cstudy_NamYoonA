#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16] = { 0 }; // 각 단어의 최대 길이는 15이므로 +1을 해서 널 문자를 고려합니다.
    int max_len = 0;

    // 다섯 개의 단어 입력 받기
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
        int len = strlen(words[i]);
        if (len > max_len) {
            max_len = len;
        }
    }

    // 세로로 읽어 출력하기
    for (int i = 0; i < max_len; i++) {
        for (int j = 0; j < 5; j++) {
            if (words[j][i] != '\0') {
                printf("%c", words[j][i]);
            }
        }
    }

    printf("\n");
    return 0;
}
