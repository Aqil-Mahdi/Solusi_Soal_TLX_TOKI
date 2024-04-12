#include <stdio.h>
#include <math.h>

int komposisi(int A, int B, int K, int x) {
    if (K == 1) {
        return fabs(A * x + B);
    }

    return fabs(A * komposisi(A, B, K - 1, x) + B);
}

int main() {
    int A, B, K, x;
    scanf("%d%d%d%d", &A, &B, &K, &x);

    printf("%d\n", komposisi(A, B, K, x));
    return 0;
}