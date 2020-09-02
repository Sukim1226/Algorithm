// 균형잡힌 세상
// cin.getline(sentence, 100, '.');
#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

void process(char buf[]) {
	int i;
	char tmp;
	stack <char> st;

	for (i = 0; i < strlen(buf); i++) {
		tmp = buf[i];
		if (tmp == '[' || tmp == '(') {
			st.push(tmp);
		} 
		else if (tmp == ']') {
			if (!st.empty() && st.top() == '[') {
				st.pop();
			}
			else {
				printf("no\n");
				return ;
			}
		}
		else if (tmp == ')') {
			if (!st.empty() && st.top() == '(') {
				st.pop();
			}
			else {
				printf("no\n");
				return ;
			}
		}
	}

	if (st.empty()) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
}

int main(void) {
	char buf[105];

	//buf size_t를 100으로 줘서 발생한 오류
	/* 100글자가 한 줄에 들어왔다면, 99번째 인덱스까지는 문자들이 있고, 그 다음에 개행 문자, 그 뒤에 널 문자까지 해서 101번째 인덱스까지 사용해야하기 때문에 102칸이 필요합니다.
	*/
	while (fgets(buf, 105, stdin) != NULL) {
		if (buf[0] == '.') {
			break;
		}

		process(buf);
	}

	return 0;
}