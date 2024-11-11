#include <stdio.h>
#include <string.h>

int main() {
    char binary[1000001];
    int length, remainder;

    // 2���� �Է� �ޱ�
    scanf("%s", binary);

    // 2������ ���� Ȯ��
    length = strlen(binary);

    // 2������ 3�� ����� ���߱� ���� �տ� '0'�� �߰�
    remainder = length % 3;
    if (remainder == 1) {
        printf("%d", binary[0] - '0');
    }
    else if (remainder == 2) {
        printf("%d", (binary[0] - '0') * 2 + (binary[1] - '0'));
    }

    // 3�ڸ��� �о 8������ ��ȯ �� ���
    for (int i = remainder; i < length; i += 3) {
        int octal_digit = (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');
        printf("%d", octal_digit);
    }

    printf("\n");
    return 0;
}
