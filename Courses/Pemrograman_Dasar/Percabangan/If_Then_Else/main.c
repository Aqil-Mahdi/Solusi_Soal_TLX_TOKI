#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	if (N > 0) {
		puts("positif\n");
	} else if (N < 0) {
		puts("negatif\n");
	} else {
		puts("nol\n");
	}
	return 0;
}