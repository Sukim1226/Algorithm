// Á¦·Î
#include <cstdio>
#include <stack>

using namespace std;

stack <int> st;

int main(void) {
	int K, i, tmp;
	scanf("%d", &K);

	for (i = 0; i < K; i++) {
		scanf("%d", &tmp);
		if (tmp) {
			st.push(tmp);
		}
		else {
			st.pop();
		}
	};

	tmp = 0;
	while (!st.empty()) {
		tmp += st.top();
		st.pop();
	}

	printf("%d", tmp);

	return 0;
}