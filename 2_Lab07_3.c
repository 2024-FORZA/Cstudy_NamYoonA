#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char files[50][51];  // 파일 이름 최대 50개, 각 파일 이름은 최대 50자
    char pattern[51];    // 패턴을 저장할 배열

    // 파일 개수 입력
    scanf("%d", &n);

    // 파일 이름 입력
    for (int i = 0; i < n; i++) {
        scanf("%s", files[i]);
    }

    int length = strlen(files[0]);

    // 각 위치별로 모든 파일이 같은 문자를 가지고 있는지 확인
    for (int i = 0; i < length; i++) {
        char current_char = files[0][i];
        int is_same = 1;  // 같은지 여부 확인 변수

        for (int j = 1; j < n; j++) {
            if (files[j][i] != current_char) {
                is_same = 0;
                break;
            }
        }

        // 모든 파일이 같은 문자를 가지면 그 문자를 패턴에 추가, 그렇지 않으면 '?'
        if (is_same) {
            pattern[i] = current_char;
        }
        else {
            pattern[i] = '?';
        }
    }

    // 패턴 문자열의 끝에 NULL 문자 추가
    pattern[length] = '\0';

    // 결과 출력
    printf("%s\n", pattern);

    return 0;
}

