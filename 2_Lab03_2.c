#include <stdio.h>

int main() {
    int L, P, V, case_num = 1;

    while (1) {
        scanf("%d %d %d", &L, &P, &V);
        if (L == 0 && P == 0 && V == 0) break;

        int full_cycles = V / P;
        int remainder_days = V % P;
        int max_days = full_cycles * L + (remainder_days < L ? remainder_days : L);

        printf("Case %d: %d\n", case_num++, max_days);
    }

    return 0;
}
