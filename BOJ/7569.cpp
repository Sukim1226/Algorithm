// ≈‰∏∂≈‰
#include <cstdio>
#include <utility>
#include <queue>

using namespace std;

typedef struct POSITION {
	int x, y, h, tomato;
} pos;

int map[105][105][105];
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
				map[k][i][j] = state;
				adj[k][i][j] = adj[k][j][i] = 1;
				if (state == 1) {
					pos p = { i, j, k, state};
					que.push(make_pair(p, 0));
					visit[k][i][j] = 1;
				}
			}
		}
	}

	while (!que.empty()) {
		pos now = que.front().first;
		int day = que.front().second;

		for (int k = now.h > 0 ? now.h - 1 : now.h; k <= now.h + 1; k++) {
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < N; j++) {
					if (adj[k][i][j] && !visit[k][i][j]) {
						int togo = map[k][i][j];
						
					}
				}
			}
		}

	}

	return 0;
}