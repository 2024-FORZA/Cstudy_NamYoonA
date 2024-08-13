#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int ball_position = 1;

    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x == ball_position) {
            ball_position = y;
        }
        else if (y == ball_position) {
            ball_position = x;
        }
    }

    printf("%d\n", ball_position);

    return 0;
}
