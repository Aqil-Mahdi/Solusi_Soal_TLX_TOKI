#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool gaya(char S[]) {
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == '_') {
            return true;
        }
    }

    return false;
}

int main() {
    char S[100];
    scanf("%s", S);

    bool cek = true;
    if (S[0] >= 'a'&& S[0] <= 'z') {
        for (int i = 1; i < strlen(S); i++) {
            if (S[i] == '_' || (S[i] >= 'A' && S[i] <= 'Z')) {
                cek = false;
                break;
            }
        }
    } else {
        for (int i = 1; i < strlen(S); i++) {
            if (S[i] >= 'a' && S[i] <= 'z') {
                cek = false;
                break;
            } 
        }
    }

    if (cek) {
        puts(S);
    } else {
        if (gaya(S)) {
            for (int i = 0; i < strlen(S); i++) {
                if (S[i] == '_') {
                    printf("%c", S[++i] - 32);
                    continue;
                }

                printf("%c", S[i]);
            }
        } else {
            for (int i = 0; i < strlen(S); i++) {
                if (S[i] >= 'A' && S[i] <= 'Z') {
                    printf("_%c", S[i] + 32);
                    continue;
                }

                printf("%c", S[i]);
            }
        }
    }

    puts("");
    return 0;
}