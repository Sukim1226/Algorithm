// 후위 표기식

#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

char str[105];
char ans[105];
stack <char> st;

void popUntil(char now) {
	while (st.top() != now) {
		printf("%c", st.top());
		st.pop();
	}
	st.pop();
}

int priority(char now) {
	switch (now) {
	case '+' :
	case '-' :
		return 1;
	case '*' :
	case '/' :
		return 2;
	case '(' :
	case ')' :
		return 3;
	default :
		return 0;
	}
}

int main(void) {
	scanf("%s", str);

	st.push('#');

	for (int i = 0; i < strlen(str); i++) {
		int nowP = priority(str[i]);
		int topP = priority(st.top());

		if (nowP == 0) {
			printf("%c", str[i]);
		}
		else if (str[i] == ')') {
			popUntil('(');
		}
		else if (nowP == 3) {
			st.push('(');
		}
		else if (topP == 2) {
			printf("%c", st.top());
			st.pop();
			topP = priority(st.top());
			if (nowP == topP) {
				printf("%c", st.top());
				st.pop();
				topP = priority(st.top());
			}
			st.push(str[i]);
		}
		else if (nowP == topP) {
			printf("%c", st.top());
			st.pop();
			st.push(str[i]);
		}
		else {
			st.push(str[i]);
		}
	}

	popUntil('#');

	return 0;
}