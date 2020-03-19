//≈‰∏∂≈‰
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <algorithm>
using namespace std;
int dx[] = { 0, 1, -1, 0 };
int dy[] = { 1, 0, 0, -1 };
int map[1005][1005];
bool ch[1005][1005];

typedef struct Position {
	int x;
	int y;
}pos;
int main(void) {
	int i, j, M, N, count_one = 0, count_minus = 0, count_zero = 0;
	queue <pair<pos, int>> que;
	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				pos tmp;
				tmp.x = i;
				tmp.y = j;
				que.push(make_pair(tmp, 0));
				count_one++;
			}
			else if (map[i][j] == -1) {
				count_minus++;
			}
			else if (map[i][j] == 0) {
				count_zero++;
			}
		}
	}
	if (count_one == M * N) {
		printf("0\n");
		return 0;
	}
	if (count_minus == M * N) {
		printf("-1\n");
		return 0;
	}
	if (count_zero == M * N) {
		printf("-1\n");
		return 0;
	}
	int count;
	while (!que.empty()) {
		pair <pos, int> now = que.front();
		que.pop();
		for (i = 0; i < 4; i++) {
			if (now.first.x + dx[i] < M && now.first.x + dx[i] >= 0
				&& now.first.y + dy[i] < N && now.first.y + dy[i] >= 0
				&& map[now.first.x + dx[i]][now.first.y + dy[i]] == 0
				&& !ch[now.first.x + dx[i]][now.first.y + dy[i]]) {
				pos tmp;
				tmp.x = now.first.x + dx[i];
				tmp.y = now.first.y + dy[i];
				que.push(make_pair(tmp, now.second + 1));
				ch[now.first.x + dx[i]][now.first.y + dy[i]] = true;
				map[now.first.x + dx[i]][now.first.y + dy[i]] = 1;
			}
		}
		count = now.second;
	}

	bool fail = false;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			if (map[i][j] == 0) {
				fail = true;
				break;
			}
		}
		if (fail) {
			printf("-1\n");
			break;
		}
	}
	if (!fail) {
		printf("%d\n", count);
	}
	return 0;
}
