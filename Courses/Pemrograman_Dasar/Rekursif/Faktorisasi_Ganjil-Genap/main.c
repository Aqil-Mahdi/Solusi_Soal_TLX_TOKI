#include <stdio.h>

int faktorialGenap(int N) {
    if (N == 1) {
        return 1;
    } else if (N % 2 == 0) {
        return N / 2 * faktorialGenap(N - 1);
    }

    return N * faktorialGenap(N - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d\n", faktorialGenap(N));
    return 0;
}