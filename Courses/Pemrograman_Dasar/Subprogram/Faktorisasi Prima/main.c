#include <stdio.h>

void faktor(int x, int *simpanFaktor, int *indeksSimpanFaktor) {
	int i = 2;
	while (i <= x) {
		if (x % i == 0) {
			x /= i;
			simpanFaktor[(*indeksSimpanFaktor)++] = i;
		} else {
			i++;
		}
	}
}

int pangkat(int x, int *simpanFaktor) {
	int ans = 1;
	for (int i = x - 1; i >= 0; i--) {
		if (simpanFaktor[x] == simpanFaktor[i]) {
			ans++;
		} else {
			break;
		}
	}

	return ans;
}

int main() {
    int N, simpanFaktor[101], indeksSimpanFaktor = 0;
	scanf("%d", &N);

	faktor(N, &simpanFaktor, &indeksSimpanFaktor);
	for (int i = 0; i < indeksSimpanFaktor; i++) {
		if (simpanFaktor[i] != simpanFaktor[i + 1]) {
			if (i == indeksSimpanFaktor - 1) {
				if (pangkat(i, &simpanFaktor) == 1) {
					printf("%d", simpanFaktor[i]);
				} else {
					printf("%d^%d", simpanFaktor[i], pangkat(i, &simpanFaktor));
				}
			} else {
				if (pangkat(i, &simpanFaktor) == 1) {
				    printf("%d x ", simpanFaktor[i]);
				} else {
					printf("%d^%d x ", simpanFaktor[i], pangkat(i, &simpanFaktor));
				}
			}
		}
	}
	return 0;
}