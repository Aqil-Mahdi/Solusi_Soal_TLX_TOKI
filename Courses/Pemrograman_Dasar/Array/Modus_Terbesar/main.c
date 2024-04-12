#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int daftar[100001];
	for (int i = 1; i <= 100000; i++) {
		daftar[i] = 0;
	}

	for (int i = 1; i <= N; i++) {
		int x;
		scanf("%d", &x);

		daftar[x]++;
	}

	int banyak = 0, modus = 0;
	for (int i = 1; i <= 100000; i++) {
		if (daftar[i] > banyak) {
			banyak = daftar[i];
			modus = i;
		}

		if (daftar[i] == banyak) {
			if (i > modus) {
				modus = i;
			}
		}
	}

	printf("%d\n", modus);
	return 0;
}