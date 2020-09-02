// 마인크래프트
#include <cstdio>

int arr[505][505];
int N, M, B;

int process(int h) {
	int i, j, block = B, time = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (arr[i][j] < h) {
				block -= h - arr[i][j];
				time += h - arr[i][j];
			}
			else if (arr[i][j] > h) {
				block += arr[i][j] - h;
				time += (arr[i][j] - h) * 2;
			}
		}
	}

	if (block < 0) {
		return 0xFFFFFFF;
	}
	else {
		return time;
	}

}

int main(void) {
	int i, j, min = 505, max = -1, ans = 0xFFFFFFF, height;

	scanf("%d %d %d", &N, &M, &B);
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
			max = arr[i][j] > max ? arr[i][j] : max;
			min = arr[i][j] < min ? arr[i][j] : min;
		}
	}

	for (i = max; i >= min; i--) {
		int time = process(i);
		if (ans > time) {
			ans = time;
			height = i;
		}
	}

	printf("%d %d", ans, height);

	return 0;
}