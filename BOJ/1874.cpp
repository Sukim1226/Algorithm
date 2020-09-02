// 스택 수열
#include <cstdio>
#include <stack>
#include <vector>

using namespace std;

vector <int> arr;
vector <char> cmd;
stack <int> st;

int main(void) {
	int n, i, tmp;
	bool YES = true;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}


	int input = 1;
	for (i = 0; i < n; i++) {
		for (; input <= arr[i]; ) {
			cmd.push_back('+');
			st.push(input++);
		}
		if (!st.empty() && st.top() == arr[i]) {
			cmd.push_back('-');
			st.pop();
		}
	}

	if (st.empty()) {
		for (i = 0; i < cmd.size(); i++) {
			printf("%c\n", cmd[i]);
		}
	}
	else {
		printf("NO\n");
	}

	return 0;
}