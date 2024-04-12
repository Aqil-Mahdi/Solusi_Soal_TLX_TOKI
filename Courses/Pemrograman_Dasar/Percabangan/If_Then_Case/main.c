#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	if (N <= 9) {
		puts("satuan\n");
	} else if (N <= 99) {
		puts("puluhan\n");
	} else if (N <= 999) {
		puts("ratusan\n");
	} else if (N <= 9999) {
		puts("ribuan\n");
	} else {
		puts("puluhribuan\n");
	}
	return 0;
}