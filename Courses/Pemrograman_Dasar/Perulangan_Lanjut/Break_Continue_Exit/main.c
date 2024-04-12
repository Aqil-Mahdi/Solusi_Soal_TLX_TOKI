#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		if (i == 42) {
			puts("ERROR");
			break;
		} else if (i % 10 == 0) {
			continue;
		} else {
			printf("%d\n", i);
		}
	}
	return 0;
}