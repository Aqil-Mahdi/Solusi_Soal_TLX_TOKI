#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    int K;
    scanf("%s%d", S, &K);

    for (int i = 0; i < strlen(S); i++) {
        for (int j = 1; j <= K; j++) {
            S[i]++;

            if (S[i] > 'z') {
                S[i] = 'a';
            }
        }
    }

    puts(S);
    return 0;
}
