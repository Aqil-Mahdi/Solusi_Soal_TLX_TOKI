#include <stdio.h>
#include <math.h>

int main() {
	double N;
	scanf("%lf", &N);

	int F = N, C = N;
	if (N != trunc(N)) {
		if (N > 0) {
			C++;
		} else {
			--F;
		}
	}

	printf("%d %d\n", F, C);
	return 0;
}