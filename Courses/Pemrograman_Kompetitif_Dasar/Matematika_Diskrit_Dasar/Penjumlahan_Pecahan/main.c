#include <stdio.h>

long long FPB(long long A, long long B) {
    if (B == 0) {
        return A;
    } else {
        return FPB(B, A % B);
    }
}

int main() {
    long long A, B, C, D;
    scanf("%lld%lld%lld%lld", &A, &B, &C, &D);

    long long E = A * D + C * B, F = B * D;
    printf("%lld %lld\n", E / FPB(E, F), F / FPB(E, F));
    return 0;
}