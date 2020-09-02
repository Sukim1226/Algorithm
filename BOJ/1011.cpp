#include <stdio.h>
#include <math.h>

void process() {
	double start, end;
	int odd = 0, even = 0;
	scanf("%lf %lf", &start, &end);

	/*even = ceil(sqrt(4 * (end - start) + 1) - 1);
	printf("even %lf\n", sqrt(4 * (end - start) + 1) - 1);*/

	odd = ceil(sqrt(4 * (end - start))) - 1;
	printf("odd %lf\n", sqrt(4 * (end - start)));

	printf("%d\n", odd);
}

int main(void) {
	int T;
	scanf("%d", &T);

	while (T--) {
		process();
	}

	return 0;
}