#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int angka = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			
			if ((angka % 10) == 0) {
				angka = 0;
			} 
            printf("%d", angka);
			angka++;
		}
		puts("");
	}
	return 0;
}