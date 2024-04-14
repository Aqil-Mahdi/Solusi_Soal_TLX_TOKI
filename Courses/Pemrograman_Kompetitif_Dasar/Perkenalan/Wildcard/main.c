#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int cari(char *S) {
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == '*') {
            return i;
        }
    }
}

int main() {
    char wild[101];
    scanf("%s", wild);

    int N;
    scanf("%d", &N);

    char pattren[N][101];
    for (int i = 0; i < N; i++) {
        scanf("%s", pattren[i]);
    }

    for (int i = 0; i < N; i++) {
        char cpyPattren[101];
        strcpy(cpyPattren, pattren[i]);

        bool cek = true;
        if (strlen(wild) - 1 > strlen(cpyPattren)) {
            cek = false;
        } else {
            for (int j = 0; j < cari(wild); j++) {
                if (wild[j] != cpyPattren[j]) {
                    cek = false;
                    break;
                }
            }

            for (int j = strlen(wild) - 1, indeksCpyPattren = strlen(cpyPattren) - 1; j > cari(wild); j--, indeksCpyPattren--) {
                if (wild[j] != cpyPattren[indeksCpyPattren]) {
                    cek = false;
                    break;
                }
            }
        }

        if (cek) {
            printf("%s\n", cpyPattren);
        }
    }
    return 0;
}