// 프린터 큐

#include <cstdio>
#include <vector>
#include <utility>

using namespace std;

void process(void) {
	int N, M, i, tmp;
	vector <pair<int, int>> printer;
	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++) {
		scanf("%d", &tmp);
		printer.push_back(make_pair(tmp, i));
	}

	tmp = 1;
	while (true) {
		int max = 0, idx;
		for (i = 0; i < printer.size(); i++) {
			if (printer[i].first > max) {
				max = printer[i].first;
				idx = i;
			}
		}

		while (idx--) {
			printer.push_back(printer[0]);
			printer.erase(printer.begin());
		}
		if (printer[0].second == M) {
			printf("%d\n", tmp);
			break;
		}
		else {
			tmp++;
		}
		printer.erase(printer.begin());
	}

}


int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		process();
	}

	return 0;
}