#include <stdio.h>

int main() {
    int students[31] = { 0 }, n, i;
    for (i = 0; i < 28; i++) {
        scanf("%d", &n);
        students[n] = 1;
    }
    for (i = 1; i <= 30; i++) {
        if (!students[i]) printf("%d\n", i);
    }
    return 0;
}
