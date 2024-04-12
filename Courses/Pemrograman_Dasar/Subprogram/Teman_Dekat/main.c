#include <stdio.h>
#include <math.h>

int indeksTemanDekat(int N) {
	int ans = 0;
	for (int i = N - 1; i >= 1; i--) {
		ans += i;
	}
	return ans;
}

int main() {
	int N, D;
	scanf("%d%d", &N, &D);

	int X[N], Y[N];
	for (int i = 0; i < N; i++) {
		scanf("%d%d", &X[i], &Y[i]);
	}

	int T[indeksTemanDekat(N)], indeksT = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			T[indeksT] = pow(abs(X[j] - X[i]), D) + pow(abs(Y[j] - Y[i]), D);
			indeksT++;
		}
	}

	int nilaiTerkecil, nilaiTerbesar;
	for (int i = 0; i < indeksTemanDekat(N); i++) {
		if (i == 0) {
			nilaiTerkecil = T[0];
			nilaiTerbesar = T[0];
		} else {
			if (T[i] > nilaiTerbesar) {
				 nilaiTerbesar = T[i];
			}

			if (T[i] < nilaiTerkecil) {
				nilaiTerkecil = T[i];
			}
		}
	}

	printf("%d %d\n", nilaiTerkecil, nilaiTerbesar);
	return 0;
}