#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100], S3[100], S4[100];
    scanf("%s%s%s%s", S1, S2, S3, S4);

    //  delete
    int S1_length = strlen(S1);
    for (int i = 0; i < S1_length; i++) {
        if (S1[i] == S2[0]) {
            int hitung = 1, indeks = i + 1;
            for (int j = 1; j < strlen(S2); j++, indeks++) {
                if (S1[indeks] != S2[j]) {
                    break;
                }

                hitung++;
            }

            if (hitung == strlen(S2)) {
                S1_length -= strlen(S2);

                for (int j = i; j < S1_length; j++) {
                    S1[j] = S1[j + strlen(S2)];
                }
                
                S1[S1_length] = '\0';
                break;
            }
        }
    }


    //  insert
    for (int i = 0; i < S1_length; i++) {
        printf("%c", S1[i]);
        if (S1[i] == S3[strlen(S3) - 1]) {
            int hitung = 1, indeks = i - 1;
            for (int j = strlen(S3) - 2; j >= 0; j--, indeks--) {
                if (S1[indeks] != S3[j]) {
                    break;
                }

                hitung++;
            }

            if (hitung == strlen(S3)) {
                for (int j = 0; j < strlen(S4); j++) {
                    printf("%c", S4[j]);
                }
            }
        }
    }
    return 0;
}