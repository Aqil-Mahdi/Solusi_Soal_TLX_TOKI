#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        int x;
        scanf("%d", &x);
        
        int hitung = 0;
        for (int j = 1; j <= x; j++) {
            if (x % j == 0) {
                hitung++;

                if (hitung > 4) {
                    break;
                }
            }
        }

        if (hitung > 0 && hitung <= 4) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
    return 0;
}