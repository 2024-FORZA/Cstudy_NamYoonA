#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char files[50][51];  // ���� �̸� �ִ� 50��, �� ���� �̸��� �ִ� 50��
    char pattern[51];    // ������ ������ �迭

    // ���� ���� �Է�
    scanf("%d", &n);

    // ���� �̸� �Է�
    for (int i = 0; i < n; i++) {
        scanf("%s", files[i]);
    }

    int length = strlen(files[0]);

    // �� ��ġ���� ��� ������ ���� ���ڸ� ������ �ִ��� Ȯ��
    for (int i = 0; i < length; i++) {
        char current_char = files[0][i];
        int is_same = 1;  // ������ ���� Ȯ�� ����

        for (int j = 1; j < n; j++) {
            if (files[j][i] != current_char) {
                is_same = 0;
                break;
            }
        }

        // ��� ������ ���� ���ڸ� ������ �� ���ڸ� ���Ͽ� �߰�, �׷��� ������ '?'
        if (is_same) {
            pattern[i] = current_char;
        }
        else {
            pattern[i] = '?';
        }
    }

    // ���� ���ڿ��� ���� NULL ���� �߰�
    pattern[length] = '\0';

    // ��� ���
    printf("%s\n", pattern);

    return 0;
}
