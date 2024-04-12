#include <stdio.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int N;
    scanf("%d", &N);

    int bola[2][N];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &bola[i][j]);
        }
    }

    int T;
    scanf("%d", &T);

    while (T--) {
        char P[2], Q[2];
        int x, y;
        scanf("%s%d%s%d", P, &x, Q, &y);

        tukar(&bola[P[0] - 'A'][x - 1], &bola[Q[0] - 'A'][y - 1]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", bola[i][j]);
        }
        puts("");
    }
    return 0;
}