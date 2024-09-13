#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);
    M -= 45;
    if (M < 0) {
        M += 60;
        H = (H == 0) ? 23 : H - 1;
    }
    printf("%d %d", H, M);
    return 0;
}
