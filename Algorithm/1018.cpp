//#include <stdio.h>
//
//char chess[55][55];
//
//int dfs(int i, int j, char prev) {
//
//
//}
//
//int main(void) {
//	int n, m;
//	int i, j;
//	int min = 0xff;
//	
//	scanf("%d %d", &n, &m);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%c", &chess[i][j]);
//		}
//	}
//
//	for (i = 0; i <= n - 8; i++) {
//		for (j = 0; j <= m - 8; j++) {
//			int cnt = dfs(i, j, chess[i][j]);
//			if (min > cnt) {
//				min = cnt;
//			}
//		}
//	}
//
//
//	return 0;
//}