#include <stdio.h>
#include <stdlib.h>

// 정렬에 사용할 비교 함수
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N); // 수의 개수 입력 받기

    int* arr = (int*)malloc(N * sizeof(int)); // 동적 메모리 할당

    // 배열 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열 정렬 (qsort 함수 사용)
    qsort(arr, N, sizeof(int), compare);

    // 정렬된 배열 출력
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr); // 동적 메모리 해제
    return 0;
}
