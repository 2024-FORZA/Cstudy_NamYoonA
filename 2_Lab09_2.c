#include <stdio.h>

int main() {
    int R, B;
    scanf("%d %d", &R, &B); // �������� ���� Ÿ�� ���� �Է� �ޱ�

    // �� Ÿ�� ���� ���
    int totalTiles = R + B;

    // ���� ũ�� Ž��
    for (int W = 1; W * W <= totalTiles; W++) {
        if (totalTiles % W == 0) { // W�� totalTiles�� ������� Ȯ��
            int L = totalTiles / W; // L ���

            // �����ڸ� ���� Ÿ�� ���� Ȯ��
            if ((L - 2) * (W - 2) == B) {
                printf("%d %d\n", L, W); // ū ���� L�� ���
                break;
            }
        }
    }

    return 0;
}
