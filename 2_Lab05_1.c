#include <stdio.h>

int main() {
    int N, prev, first = 1;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        prev = -1;  // �ʱⰪ ����
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            if (num != prev) { // �ߺ� �˻�
                if (!first) printf(" "); // ù ��° ���ڰ� �ƴ� �� ���� ���
                printf("%d", num);
                prev = num; // ���� ���� ������Ʈ
                first = 0; // ù ��° ���� ��� �Ϸ�
            }
        }
        printf(" $ \n"); // ���Ŀ� �°� ���
        first = 1; // ���� ���̽��� ���� �ʱ�ȭ
    }
    return 0;
}
