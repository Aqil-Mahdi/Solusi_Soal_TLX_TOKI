#include <stdio.h>

void gambar(int N) {
    if (N == 0) {
        return;
    }

    gambar(N - 1);

    for (int i = 1; i <= N; i++) {
        printf("*");
    }
    puts("");
    gambar(N - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    gambar(N);
    return 0;
}