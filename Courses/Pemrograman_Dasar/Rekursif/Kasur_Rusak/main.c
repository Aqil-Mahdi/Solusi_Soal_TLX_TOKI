#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrom(char S[], int i, int j) {
    if (i >= j) {
        return true;
    } else if (S[i] != S[j]) {
        return false;
    } 

    return palindrom(S, ++i, --j);
}

int main() {
    char S[100];
    scanf("%s", S);

    puts(palindrom(S, 0, strlen(S) - 1) ? "YA" : "BUKAN");
    return 0;
}
