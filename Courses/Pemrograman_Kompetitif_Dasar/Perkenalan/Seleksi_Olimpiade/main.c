#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void tukarNilai(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

void tukarID(char *A, char *B) {
    char temp[6];
    strcpy(temp, A);

    strcpy(A, B);
    strcpy(B, temp);
}

bool cek(char cariID[], char IDPeserta[][6], int M) {
    for (int i = 0; i < M; i++) {
        if (strcmp(IDPeserta[i], cariID) == 0) {
            return true;
        } 
    }

    return false;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d%d", &N, &M);

        char cariID[6];
        scanf("%s", cariID);

        char IDPeserta[N][6];
        int nilaiSesi[N][3];
        for (int i = 0; i < N; i++) {
            scanf("%s", IDPeserta[i]);
            for (int j = 0; j < 3; j++) {
                scanf("%d", &nilaiSesi[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (nilaiSesi[i][2] < nilaiSesi[j][2]) {
                    tukarID(IDPeserta[i], IDPeserta[j]);
                    tukarNilai(&nilaiSesi[i][2], &nilaiSesi[j][2]);
                    tukarNilai(&nilaiSesi[i][1], &nilaiSesi[j][1]);
                    tukarNilai(&nilaiSesi[i][0], &nilaiSesi[j][0]);
                } else {
                    if (nilaiSesi[i][2] == nilaiSesi[j][2]) {
                        if (nilaiSesi[i][1] < nilaiSesi[j][1]) {
                            tukarID(IDPeserta[i], IDPeserta[j]);
                            tukarNilai(&nilaiSesi[i][2], &nilaiSesi[j][2]);
                            tukarNilai(&nilaiSesi[i][1], &nilaiSesi[j][1]);
                            tukarNilai(&nilaiSesi[i][0], &nilaiSesi[j][0]);
                        } else {
                            if (nilaiSesi[i][1] == nilaiSesi[j][1]) {
                                if (nilaiSesi[i][0] < nilaiSesi[j][0]) {
                                    tukarID(IDPeserta[i], IDPeserta[j]);
                                    tukarNilai(&nilaiSesi[i][2], &nilaiSesi[j][2]);
                                    tukarNilai(&nilaiSesi[i][1], &nilaiSesi[j][1]);
                                    tukarNilai(&nilaiSesi[i][0], &nilaiSesi[j][0]);
                                }
                            }
                        }
                    }
                }
            }
        }

        puts((cek(cariID, IDPeserta, M)) ? "YA" : "TIDAK");
    }
    return 0;
}