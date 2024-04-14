#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//  Bermasalah di Pointer dan Reference
int maxRC(int R, int C) {
    return (R > C) ? R : C;
}

bool homogen(int matriks[128][128], int R, int C, int K) {
    int nil = matriks[R][C];
    for (int i = R; i < R + K; i++) {
        for (int j = C; j < C + K; j++) {
            if (nil != matriks[i][j]) {
                return false;
            }
        }
    }

    return true;
}

void quadtree(int matriks[128][128], int R, int C, int K, int *jumlah, char (*kode)[128 * 128], char S[]) {
    if (homogen(matriks, R, C, K)) {
        if (matriks[R][C] == 1) {
            char ch = '1';
            strncat(S, &ch, 1)
            strcpy(kode[(*jumlah)++], S);
        }
    } else {
        char ch;
        
        ch = '0';
        quadtree(matriks, R, C, K / 2, &jumlah, kode, strncat(S, &ch, 1));
        
        ch = '1';
        quadtree(matriks, R + (K / 2), C, K / 2, &jumlah, kode, strncat(S, &ch, 1));

        ch = '2';
        quadtree(matriks, R, C + (K / 2), K / 2, &jumlah, kode, strncat(S, &ch, 1));

        ch = '3';
        quadtree(matriks, R + (K / 2), C + (K / 2), K / 2, &jumlah, kode, strncat(S, &ch, 1));
    }
}

int main() {
    int R, C;
    scanf("%d%d", &R, &C);

    int bkMatriks = 1;
    while (bkMatriks < maxRC(R, C)) {
        bkMatriks *= 2;
    }

    int matriks[bkMatriks][bkMatriks];
    memset(matriks, 0, sizeof(matriks));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    int jumlah = 0;
    char kode[128 * 128][128 * 128], S[128 * 128] = "";
    quadtree(matriks, 0, 0, bkMatriks, &jumlah, kode, S);

    printf("%d\n", jumlah);
    for (int i = 0; i < jumlah; i++) {
        puts(kode[i]);
    }
    return 0;
}