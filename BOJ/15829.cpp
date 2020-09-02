// Hashing
#include <cstdio>

char arr[55];

int main(void) {
	int L, i, j;
	long long int n31, a, sum, mod;

	scanf("%d", &L);
	scanf("%s", arr);

	n31 = 31;
	sum = 0;
	mod = 1234567891;

	for (i = 0; i < L; i++) {
		a = (long long int)(arr[i] - 96);
		
		for (j = 0; j < i; j++) {
			a = (a * n31) % mod;
		}
		sum += a;
	}

	sum %= mod;

	printf("%lld", sum);

	return 0;
}