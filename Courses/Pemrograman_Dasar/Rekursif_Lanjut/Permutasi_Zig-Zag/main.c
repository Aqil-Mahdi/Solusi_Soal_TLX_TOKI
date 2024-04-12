#include <stdio.h>

void kombinasi(int x, int N, int K, int catat[], int angka) {
    if (x >= K) {
        for (int i = 0; i < K; i++) {
            printf("%d ", catat[i]);
        }

        puts("");
    } else {
        for (int i = angka + 1; i <= N; i++) {
            catat[x] = i;
            angka = i;
            kombinasi(x + 1, N, K, catat, angka);
        }
    }
}

int main() {
    int N, K, catat[10];
    scanf("%d%d", &N, &K);

    kombinasi(0, N, K, catat, 0);
    return 0;
}