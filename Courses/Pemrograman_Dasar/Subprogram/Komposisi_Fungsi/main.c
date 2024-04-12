#include <stdio.h>
#include <math.h>

int komposisi(int A, int B, int x) {
    return abs(A * x + B);
}

int main() {
    int A, B, K, x;
    scanf("%d%d%d%d", &A, &B, &K, &x);

    int ans = 0;
    for (int i = 1; i <= K; i++) {
        ans = komposisi(A, B, x);
        x = ans;
    }

    printf("%d\n", ans);
    return 0;
}