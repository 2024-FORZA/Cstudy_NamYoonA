#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16] = { 0 }; // �� �ܾ��� �ִ� ���̴� 15�̹Ƿ� +1�� �ؼ� �� ���ڸ� ����մϴ�.
    int max_len = 0;

    // �ټ� ���� �ܾ� �Է� �ޱ�
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
        int len = strlen(words[i]);
        if (len > max_len) {
            max_len = len;
        }
    }

    // ���η� �о� ����ϱ�
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
