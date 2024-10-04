#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int T, A, B;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A / gcd(A, B) * B);
    }
    return 0;
}
