// �������� ����
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

	//buf size_t�� 100���� �༭ �߻��� ����
	/* 100���ڰ� �� �ٿ� ���Դٸ�, 99��° �ε��������� ���ڵ��� �ְ�, �� ������ ���� ����, �� �ڿ� �� ���ڱ��� �ؼ� 101��° �ε������� ����ؾ��ϱ� ������ 102ĭ�� �ʿ��մϴ�.
	*/
	while (fgets(buf, 105, stdin) != NULL) {
		if (buf[0] == '.') {
			break;
		}

		process(buf);
	}

	return 0;
}