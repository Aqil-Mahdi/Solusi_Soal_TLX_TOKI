#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100];
    scanf("%s%s", S1, S2);

    while (strstr(S1, S2)) {
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
    }

    puts(S1);
    return 0;
}