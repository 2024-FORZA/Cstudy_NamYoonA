#include <stdio.h>

// Rev �Լ�: �־��� ������ �ڸ����� ������ �Լ�
int Rev(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int X, Y;

    // �Է� �ޱ�
    scanf("%d %d", &X, &Y);

    // Rev(X)�� Rev(Y)�� ���
    int revX = Rev(X);
    int revY = Rev(Y);

    // Rev(X) + Rev(Y)�� ���
    int sum = revX + revY;

    // ���� ����� Rev(sum)�� ���
    int result = Rev(sum);

    // ��� ���
    printf("%d\n", result);

    return 0;
}
