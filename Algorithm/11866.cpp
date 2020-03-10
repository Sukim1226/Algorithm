//// 요세푸스 문제 0
//// 쿠찬스
//
//#include <cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//queue <int> in;
//vector <int> out;
//
//int N, K;
//
//int main(void) {
//	int i;
//
//	scanf("%d %d", &N, &K);
//
//	for (i = 0; i < N; i++) {
//		in.push(i + 1);
//	}
//
//	while (!in.empty()) {
//		for (i = 0; i < K - 1; i++) {
//			in.push(in.front());
//			in.pop();
//		}
//		out.push_back(in.front());
//		in.pop();
//	}
//
//	printf("<%d", out[0]);
//	for (i = 1; i < out.size(); i++) {
//		printf(", %d", out[i]);
//	}
//	printf(">");
//
//	return 0;
//}