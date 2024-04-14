#include <stdio.h>
#include <stdbool.h>

bool runtuh(int R, int C, char (*papan)[C], int *jatuh) {
    bool cek = false;
    for (int i = 0; i < R; i++) {
        bool tes = true;
        for (int j = 0; j < C; j++) {
            if (papan[i][j] == '0') {
                tes = false;
                break;
            }
        }

        if (tes) {
            *jatuh = i;
            for (int j = 0; j < C; j++) {
                papan[i][j] = '0';
            }

            cek = true;
        }
    }

    return cek;
}

int main() {
    int R, C;
    scanf("%d%d", &R, &C);

    char papan[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf(" %c", &papan[i][j]);
        }
    }

    int jatuh = 0;
    while (runtuh(R, C, papan, &jatuh)) {
        for (int i = jatuh - 1; i >= 0; i--) {
			for (int j = 0; j < C; j++) {
				if (papan[i][j] == '1') {
					for (int k = i; k < R; k++) {
						if (papan[k + 1][j] == '0') {
							papan[k][j] = '0';
							papan[k + 1][j] = '1';
						} else { 
                            if (papan[k + 1][j] == '1') {
							    break;
						    }
                        }
					}
				}
			}
		}
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            putchar(papan[i][j]);
        }
        puts("");
    }
    return 0;
}
