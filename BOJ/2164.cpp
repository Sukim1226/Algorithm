// Ä«µå2
#include <cstdio>
#include <queue>

using namespace std;

queue <int> que;

int main(void) {
	int N;
	int i, last;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		que.push(i + 1);
	}

	while (true) {
		last = que.front();
		que.pop();
		if (que.empty())
			break;
		que.push(que.front());
		que.pop();
	}

	printf("%d", last);

	return 0;
}