//// 직사각형에서 탈출
//// 숏코딩 해보기
//#include <stdio.h>
//
//int abs(int a) { return a > 0 ? a : -a; }
//int min(int a, int b) { return a > b ? b : a; }
//
//int main(void) {
//	int x, y, w, h;
//	int ans;
//
//	scanf("%d %d %d %d", &x, &y, &w, &h);
//
//	ans = min(min(abs(x - w), abs(x - 0)), 
//		min(abs(y - h), abs(y - 0)));
//
//	printf("%d", ans);
//
//	return 0;
//}