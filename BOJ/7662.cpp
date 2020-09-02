// 이중 우선순위 큐
#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

multiset<int> arr;

void process(void) {
	int k, n;
	char cmd;
	multiset<int>::iterator it;

	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		cin >> cmd >> n;
		if (cmd == 'I') {
			arr.insert(n);
		}
		else {
			if (arr.empty()) {
				continue;
			} 
			else if (arr.size() == 1) {
				it = arr.begin();
				arr.erase(it);
			}
			else if (n == -1) {
				it = arr.begin();
				arr.erase(it);
			}
			else {
				it = arr.end();
				it--;
				arr.erase(it);
			}
		}
	}

	if (arr.empty()) {
		printf("EMPTY\n");
		return;
	}

	multiset<int>::iterator max, min;

	min = arr.begin();
	max = arr.end();
	max--;
	printf("%d %d\n", *max, *min);

	arr.clear();
}

int main(void) {
	int T;
	scanf("%d", &T);

	while (T--) {
		process();
	}
}