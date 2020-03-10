//// 숫자 카드 2
//// 1천만 배열 쌉가능
//#include <cstdio>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//map <int, int> card;
//vector <int> cnt;
//
//int main(void) {
//	int N, M;
//	int key, i;
//
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++) {
//		scanf("%d", &key);
//		if (card.find(key) == card.end()) {
//			card.insert(make_pair(key, 1));
//		}
//		else {
//			card[key]++;
//		}
//	}
//
//	scanf("%d", &M);
//
//	for (i = 0; i < M; i++) {
//		scanf("%d", &key);
//		if (card.find(key) == card.end()) {
//			cnt.push_back(0);
//		}
//		else {
//			cnt.push_back(card[key]);
//		}
//	}
//
//	for (i = 0; i < M; i++) {
//		printf("%d ", cnt[i]);
//	}
//
//	return 0;
//}
