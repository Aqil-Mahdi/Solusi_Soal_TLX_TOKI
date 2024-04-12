#include <stdio.h>

int main() {
	int N, hasil = 0;
	
	while (scanf("%d", &N) != EOF) {
		hasil += N;
	}
	
	printf("%d\n", hasil);
	return 0;
}