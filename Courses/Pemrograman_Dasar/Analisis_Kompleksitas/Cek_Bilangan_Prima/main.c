#include <stdio.h>
#include <stdbool.h>

int main() {
	int N;
    scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		int x;
		scanf("%d", &x);
		
		bool cek = true;
		if (x == 1) {
			cek = false;
		} else {
			for (int i = 2; i * i <= x; i++) {
				if (x % i == 0) {
					cek = false;
					break;
				}
			}
		}
		
		if (cek)
			puts("YA");
		else 
			puts("BUKAN");
	}
	return 0;
}