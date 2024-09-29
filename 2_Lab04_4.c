#include <stdio.h>
#include <string.h>

int main() {
    int T, a[26], b[26];
    char A[101], B[101];
    scanf("%d", &T);

    while (T--) {
        scanf("%s %s", A, B);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

        for (int i = 0; A[i]; i++) a[A[i] - 'a']++;
        for (int i = 0; B[i]; i++) b[B[i] - 'a']++;

        int is_anagram = 1;
        for (int i = 0; i < 26; i++)
            if (a[i] != b[i]) {
                is_anagram = 0;
                break;
            }

        if (is_anagram)
            printf("%s & %s are anagrams.\n", A, B);
        else
            printf("%s & %s are NOT anagrams.\n", A, B);
    }

    return 0;
}
