#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    scanf("%s", S);

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] -= 32;
        } else {
            S[i] += 32;
        }
    }

    puts(S);
    return 0;
}