#include <stdio.h>
#include <stdlib.h>

// ���Ŀ� ����� �� �Լ�
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N); // ���� ���� �Է� �ޱ�

    int* arr = (int*)malloc(N * sizeof(int)); // ���� �޸� �Ҵ�

    // �迭 �Է� �ޱ�
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // �迭 ���� (qsort �Լ� ���)
    qsort(arr, N, sizeof(int), compare);

    // ���ĵ� �迭 ���
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr); // ���� �޸� ����
    return 0;
}
