// 전쟁 - 전투
#include <cstdio>

int N, M;
char map[105][105];
int visit[105][105];
int WB[2];
int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, 1, -1, 0 };

int dfs(int n, int m, char c) {
    int sum = 1;
    visit[n][m] = true;
    for (int i = 0; i < 4; i++) {
        int toN = n + dx[i];
        int toM = m + dy[i];
        if ((0 <= toN || toN < N) && (0 <= toM || toM < M)) {
            if (map[toN][toM] == c && !visit[toN][toM]) {
                sum += dfs(toN, toM, c);
            }
        } else {
            continue;
        }
    }
    return sum;
}

int main(void) {
    // N : 가로 크기, M : 세로 크기
    scanf("%d %d", &M, &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (visit[i][j]) {
                continue;
            }
            int num = dfs(i, j, map[i][j]);
            WB[(map[i][j] == 'W' ? 0 : 1)] += num * num;
        }
    }

    printf("%d %d", WB[0], WB[1]);

    return 0;
}