#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//  PR Blom Selesai :(

int matriks[128][128], indexCatat;
char catat[128 * 128][100];

int max(int R, int C) {
    return (R > C) ? R : C;
}

bool homogen(int R, int C, int K) {
    int val = matriks[R][C];
    for (int i = R; i < R + K; i ++) {
        for (int j = C; j < C + K; j++) {
            if (matriks[i][j] != val) {
                return false;
            }
        }
    }

    return true;
}

void quadtree(int R, int C, int K, char S[]) {
    if (homogen(R, C, K)) {  
        if (matriks[R][C] == 1) {
            strcpy(catat[indexCatat], S);
            catat[indexCatat][strlen(catat[indexCatat]) + 1] = '\0';
            catat[indexCatat][strlen(catat[indexCatat]) - 1] = '1';
        }
    } else {
        quadtree(R, C, K / 2, strncat(S, "1", strlen(S)));
        quadtree(R + (K / 2), C, K / 2, strncat(S, "1", strlen(S)));
        quadtree(R, C + (K / 2), K / 2, strncat(S, "2", strlen(S)));
        quadtree(R + (K / 2), C + (K / 2), K / 2, strncat(S, "3", strlen(S)));
    }
}

int main() {
    int R, C;
    scanf("%d%d", &R, &C);

    int maxRC = max(R, C), indexMatriks = 1;
    while (indexMatriks < maxRC) {
        indexMatriks *= 2;
    }

    int matriks[indexMatriks][indexMatriks];
    memset(matriks, 0, sizeof(matriks));
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    indexCatat = 0;
    quadtree(0, 0, indexMatriks, "");
    
    printf("%d\n", indexCatat);
    for (int i = 0; i < indexCatat; i++) {
        puts(catat[i]);
    }
    return 0;
}
