#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // ��� �� �Է� �ޱ�

    int weight[50], height[50], rank[50];

    // �����Կ� Ű �Է� �ޱ�
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &weight[i], &height[i]);
        rank[i] = 1; // �ʱ� ����� 1�� ����
    }

    // ��ġ ��� ���
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++;
            }
        }
    }

    // ��� ���
    for (int i = 0; i < N; i++) {
        printf("%d ", rank[i]);
    }

    return 0;
}
