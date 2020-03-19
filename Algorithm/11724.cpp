//연결 요소의 개수
#include <cstdio>
#include <vector>

using namespace std;

int visit[1005];
vector <int> adj[1005];

void travel(int now) {
	if (!visit[now]) {
		visit[now] = 1;
		for (int i = 0; i < adj[now].size(); i++) {
			travel(adj[now][i]);
		}
	}
}

int main(void) {
	int N, M;
	int cnt = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			travel(i);
			cnt++;
		}
	}	

	printf("%d", cnt);

	return 0;
}