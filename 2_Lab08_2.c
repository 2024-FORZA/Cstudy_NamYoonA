#include <stdio.h>
#define MAX 100010

int arr[MAX];

int main() {
    int n, k;
    int cnt = 0;

    scanf("%d %d", &n, &k);

    for (int i = 2; i <= n; i++) {
        if (arr[i]) continue; // 소수가 아니면 건너뛰기
        for (int j = i; j <= n; j += i) {
            arr[j] = (arr[j] > i) ? arr[j] : i; // max(arr[j], i)
        }
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] <= k) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
