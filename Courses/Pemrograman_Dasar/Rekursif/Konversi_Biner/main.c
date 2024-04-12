#include <stdio.h>
#include <string.h>

void biner(int N, char *S, int i) {
    if (N == 1) {
        S[i] = '1';
        S[i+1] = '\0';
        return;
    } else if (N % 2 == 0) {
        S[i] = '0';
        biner(N / 2, S, ++i);
    } else {
        S[i] = '1';
        biner(N / 2, S, ++i);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    char S[100];
    biner(N, S, 0);

    for (int i = strlen(S) - 1; i >= 0; i--) {
        printf("%c", S[i]);
    }
    return 0;
}
