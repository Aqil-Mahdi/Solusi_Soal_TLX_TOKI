#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char A[1000], B[1000];
    scanf("%s%s", A, B);

    bool cek = false;
    for (int i = 0; i < strlen(A); i++) {
        char S[strlen(A)];
        strcpy(S, A);

        for (int j = i; j < strlen(S) - 1; j++) {
            S[j] = S[j + 1];
        }

        S[strlen(S) - 1] = '\0';
        if (strcmp(S, B) == 0) {
            cek = true;
            break;
        } 
    }

    puts((cek) ? "Tentu saja bisa!" : "Wah, tidak bisa :(");
    return 0;
}