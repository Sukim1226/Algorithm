// 랜선 자르기
// 이진탐색
// long long을 써야했음
#include <cstdio>

long long int arr[10005];

int main(void) {
	int K, N, i;
	long long int ans = 0;
	scanf("%d %d", &K, &N);

	for (i = 0; i < K; i++) {
		scanf("%lld", &arr[i]);
		ans += arr[i];
	}

	ans /= N;

	long long int left = 1, right = ans, mid;

	while (left < right) {
		long long int tmp = 0;
		mid = (left + right) / 2 + 1;

		for (i = 0; i < K; i++) {
			tmp += arr[i] / mid;
		}

		if (N <= tmp) {
			left = mid;
		}
		else {
			right = mid - 1;
		}
	}

	printf("%lld", left);

	return 0;
}