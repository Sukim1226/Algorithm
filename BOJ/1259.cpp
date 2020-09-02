// Æç¸°µå·Ò¼ö
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	while (true) {
		int i;
		bool yes = true;
		string str;

		cin >> str;
		
		if (str == "0") {
			break;
		}
		else {
			for (i = 0; i < str.length() / 2; i++) {
 				if (str[i] != str[str.length() - i - 1]) {
					yes = false;
					break;
				}
			}

			if (yes) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
	}

	return 0;
}