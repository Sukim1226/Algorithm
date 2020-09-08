// 효율적인 해킹
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
vector <int> map[10005];
bool visit[10005];
int hacked[10005];

void init(void) {
    for (int i = 1; i <= N; i++) {
        visit[i] = false;
    }
}

int dfs(int now) {
    int sum = 1;
    visit[now] = true;
    for (int i = 0; i < map[now].size(); i++) {
        if (!visit[map[now][i]]) {
            sum += dfs(map[now][i]);
        }
    }
    return sum;
}

int main(void) {
    int MAX = 0;
    
    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        map[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        int hack = dfs(i);
        hacked[i] = hack;
        MAX = max(MAX, hack);
        printf("hack : %d / idx : %d\n", hack, i);
        init();
    }

    for (int i = 1; i <= N; i++) {
        if (hacked[i] == MAX) {
            printf("%d ", i);
        }
    }

    return 0;
}