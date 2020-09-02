// 피보나치 함수
#include <cstdio>

typedef struct PAIR {
	int n0;
	int n1;
} pair;

pair fibo[45];

void process(void) {
	int N;
	scanf("%d", &N);

	printf("%d %d\n", fibo[N].n0, fibo[N].n1);

}

void cntFibo(void) {
	fibo[0] = { 1, 0 };
	fibo[1] = { 0, 1 };

	for (int i = 2; i <= 40; i++) {
		fibo[i].n0 = fibo[i - 1].n0 + fibo[i - 2].n0;
		fibo[i].n1 = fibo[i - 1].n1 + fibo[i - 2].n1;
	}
}

int main(void) {
	int T;

	scanf("%d", &T);
	
	cntFibo();

	while (T--)
		process();
	
	return 0;
}