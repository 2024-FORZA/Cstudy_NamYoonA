#include <stdio.h>
#include <string.h>

int main() {
    char input[101]; // �Է� ���ڿ� ����
    char result[101]; // ��� ����
    int index = 0; // ��� ���ڿ��� �ε���

    // �Է� �ޱ�
    scanf("%s", input);

    // ù ��° ���ڴ� ����� �߰�
    result[index++] = input[0];

    // �Է� ���ڿ� ��ȸ
    for (int i = 1; i < strlen(input); i++) {
        if (input[i] == '-') {
            // ������ ���� ���ڴ� �빮��, ����� �߰�
            result[index++] = input[i + 1];
        }
    }

    // ��� ���ڿ� ���� �� ���� �߰�
    result[index] = '\0';

    // ��� ���
    printf("%s\n", result);

    return 0;
}
