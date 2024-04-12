#include <stdio.h>

int main() {
	int N;

	int daftar[101], indeks = 0;
	while (scanf("%d", &N) != EOF) {
		daftar[indeks] = N;
		indeks++;
	}

	for (int i = indeks - 1; i >= 0; i--) {
		printf("%d\n", daftar[i]);
	}
	return 0;
}