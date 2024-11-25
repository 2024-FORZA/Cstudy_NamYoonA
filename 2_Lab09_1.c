#include <stdio.h>
#include <stdlib.h>

int main() {
    int mushrooms[10];
    int sum = 0, closest = 0;

    // ���� ���� �Է� �ޱ�
    for (int i = 0; i < 10; i++) {
        scanf("%d", &mushrooms[i]);
    }

    // ���� ����ϸ� 100�� ���� ����� ���� ã��
    for (int i = 0; i < 10; i++) {
        sum += mushrooms[i];

        if (abs(100 - sum) <= abs(100 - closest)) {
            closest = sum;
        }

        if (sum >= 100) {
            break;
        }
    }

    printf("%d\n", closest);

    return 0;
}
