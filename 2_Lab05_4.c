#include<stdio.h>
#include<string.h>

int main() {
    while (1) {
        char inputString[101] = { 0, };  // ���ڿ� �Է� �迭
        scanf("%[^\n]s", inputString);  // ���� ���� ������ �Է¹���

        // �� ���� �ԷµǸ� ����
        if (inputString[0] == '\0')
            break;

        int lowercaseCount = 0, uppercaseCount = 0, digitCount = 0, spaceCount = 0;

        // ���ڿ��� �� ���ڸ� ��ȸ�ϸ� ī��Ʈ
        for (int i = 0; i < strlen(inputString); i++) {
            if (inputString[i] == 32) // ����
                spaceCount++;
            else if ((48 <= inputString[i]) && (inputString[i] <= 57)) // ����
                digitCount++;
            else if ((65 <= inputString[i]) && (inputString[i] <= 90)) // �빮��
                uppercaseCount++;
            else if ((97 <= inputString[i]) && (inputString[i] <= 122)) // �ҹ���
                lowercaseCount++;
        }

        // ��� ���
        printf("%d %d %d %d\n", lowercaseCount, uppercaseCount, digitCount, spaceCount);
        scanf("%*c");  // ���� ���� ����
    }

    return 0;
}
