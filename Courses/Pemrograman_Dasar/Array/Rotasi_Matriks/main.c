#include <stdio.h>

int main() {
	int N, M;
    scanf("%d%d", &N, &M);

	int matriks[101][101];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &matriks[i][j]);
		}
	}

	for (int i = 0 ; i < M; i++) {
		for (int j = N - 1; j >= 0; j--) {
			printf("%d ", matriks[j][i]);
		}
		puts("");
	}

	return 0;
}