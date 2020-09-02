#include <stdio.h>

int main(void) {
	int x, i;
	scanf("%d", &x);

	for (i = 1; i < 5000; i++) {
		if (x - i <= 0)
			break;
		else
			x -= i;
	}

	if (i % 2 != 0) {
		printf("%d/%d\n", i - (x - 1), 1 + (x - 1));
	}
	else {
		printf("%d/%d\n", 1 + (x - 1), i - (x - 1));
	}

	return 0;
}