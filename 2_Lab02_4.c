#include <stdio.h>

int main() {
    int date, car, count = 0;
    scanf("%d", &date);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &car);
        if (car == date) count++;
    }
    printf("%d", count);
    return 0;
}
