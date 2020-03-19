// ≈‰∏∂≈‰
#include <cstdio>
#include <utility>
#include <queue>

using namespace std;

typedef struct POSITION {
	int x, y, h;
} pos;

int adj[105][105][105];
int visit[105][105][105];
queue <pair<pos, int>> que;

int main(void) {
	int M, N, H;

	scanf("%d %d %d", &M, &N, &H);

	for (int k = 0; k < H; k++) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				int state;
				scanf("%d", &state);
				adj[k][i][j] = state;
				if (state == 1) {
					pos p = { i, j, k };
					que.push(make_pair(p, state));
				}
			}
		}
	}

	while (!que.empty()) {
		pos now = que.front().first;
		int state = que.front().second;

	}

	return 0;
}