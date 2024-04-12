#include <stdio.h>

int main() {
    char S[101];
    fgets(S, sizeof(S), stdin);

    puts(S);
    return 0;
}