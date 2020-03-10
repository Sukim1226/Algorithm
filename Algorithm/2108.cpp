//// ≈Î∞Ë«–
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int sum;
//int common[8005];
//
//vector <int> arr;
//
//int main(void) {
//	int N, i, tmp;
//	int max = 0;
//
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++) {
//		scanf("%d", &tmp);
//
//		sum += tmp;
//		common[tmp + 4000]++;
//		arr.push_back(tmp);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (i = 0; i < 8005; i++) {
//		if (common[i] > max) {
//			max = common[i];
//			tmp = i;
//		}
//	}
//
//	for (i = tmp + 1; i < 8005; i++) {
//		if (common[i] == max) {
//			tmp = i;
//			break;
//		}
//	}
//	
//	printf("%d\n", (int)round((double)sum / N));
//	printf("%d\n", arr[N / 2]);
//	printf("%d\n", tmp - 4000);
//	printf("%d\n", arr[N - 1] - arr[0]);
//
//	return 0;
//}