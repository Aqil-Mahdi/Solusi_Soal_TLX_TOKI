#include <stdio.h>

int balik(int n) {
    int putar = 0;

    while (n > 0) {
        putar = (putar * 10) + (n % 10);
        n /= 10;
    }
    
    return putar;
}

int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    int ans = balik(A) + balik(B);
    printf("%d\n", balik(ans));
    return 0;
}