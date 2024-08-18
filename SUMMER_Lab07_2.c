#include <stdio.h>

int main() {
    char S[101];  
    int position[26];  
    scanf("%s", S);

   
    for (int i = 0; i < 26; i++) {
        position[i] = -1;
    }

    
    for (int i = 0; S[i] != '\0'; i++) {
        int index = S[i] - 'a';
        if (position[index] == -1) 
            position[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", position[i]);
    }

    return 0;
}
