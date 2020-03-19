// Four Squares
#include <cstdio>

// n�� k���� �������� ������ ǥ���� �� �ִ���.
bool isok(int n, int k) {
	if (k == 0) {
		return n == 0;
	}

	for (int i = 1; i * i <= n; i++)
		if (isok(n - i * i, k - 1))
			return true;
	
	return false;
}

int main(void) {
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= 3; i++) {
		if (isok(n, i)) {
			printf("%d", i);
			return 0;
		}
	}

	printf("4");
	return 0;
}