#include <stdio.h>

int main() {
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

	int x = x1 - x2;
	if (x < 0) {
		x *= -1;
	}

	int y = y1 - y2;
	if (y < 0) {
		y *= -1;
	}

	int jarak = x + y;
	printf("%d\n", jarak);
	return 0;
}