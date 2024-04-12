#include <stdio.h>

int main() {
	int A, T;
	scanf("%d%d", &A, &T);
	
	double luas = (double)(A * T) / 2;
	printf("%.2lf\n", luas);
	return 0;
}