#include <stdio.h>
#include <string.h>

int main() {
    char input[1000001];
    fgets(input, sizeof(input), stdin);

    int count = 0;
    char* token = strtok(input, " \n"); // ����� �ٹٲ����� ���ڿ� �и�

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \n");
    }

    printf("%d\n", count);
    return 0;
}
