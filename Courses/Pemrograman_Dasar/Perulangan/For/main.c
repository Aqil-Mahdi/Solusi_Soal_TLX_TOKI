#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		int B;
		scanf("%d", &B);

		sum += B;
	}
	
	printf("%d\n", sum);
	return 0;
}