#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int A = 0, B = 0;
	for (int i = 1; i <= N; i++) {
		int x;
		scanf("%d", &x);
		
		if (i == 1) {
			A = x;
			B = x;
		} else {
			if (A < x) {
				A = x;
			} 
			
			if (B > x) {
				B = x;
			}
		}
	}
	
	printf("%d %d\n", A, B);
	return 0;
}