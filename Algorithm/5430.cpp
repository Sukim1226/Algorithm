//// AC
//#include <iostream>
//#include <cctype>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//void process(void) {
//	int i, p, cnt;
//	string func, tmp;
//	bool front = true;
//	deque <int> seq;
//	
//	cin >> func >> p >> tmp;
//
//	cnt = 0;
//	
//	for (i = 0; i < tmp.length(); i++) {
//		if (isdigit(tmp[i])) {
//			cnt++;
//		}
//		else if (cnt != 0) {
//			string sub = tmp.substr(i - cnt, cnt);
//			seq.push_back(stoi(sub, nullptr));
//			cnt = 0;
//		}
//	}
//
//
//	for (i = 0; i < func.length(); i++) {
//		if (func[i] == 'R') {
//			front = !front;
//		}
//		else if (seq.empty()) {
//			cout << "error" << endl;
//			return;
//		}
//		else {
//			if (front) {
//				seq.pop_front();
//			}
//			else {
//				seq.pop_back();
//			}
//		}
//	}
//
//	if (seq.empty()) {
//		cout << "[]" << endl;
//	}
//	else if (front) {
//		cout << "[";
//		while (true) {
//			cout << seq.front();
//			seq.pop_front();
//			if (seq.empty()) {
//				break;
//			}
//			cout << ",";
//		}
//		cout << "]" << endl;
//	}
//	else {
//		cout << "[";
//		while (true) {
//			cout << seq.back();
//			seq.pop_back();
//			if (seq.empty()) {
//				break;
//			}
//			cout << ",";
//			
//		}
//		cout << "]" << endl;
//	}
//}
//
//int main(void) {
//	int T;
//	cin >> T;
//	while (T--) {
//		process();
//	}
//
//	return 0;
//}