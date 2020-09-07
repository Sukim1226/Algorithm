#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    int len;
    bool ans = true;
    
    cin >> s;

    len = s.length();

    for (int i = 1; i <= len / 2; i++) {
        if (len % i != 0) {
            continue;
        }

        string sub = s.substr(0, i);
        for (int j = i; j < len; j += i) {
            if (sub.compare(s.substr(j, i))) {
                ans = false;
                break;    
            }
        }

        if (ans) {
            cout << "True" << endl;
            return 0;
        } else {
            ans = true;
        }
    }

    cout << "False" << endl;

    return 0;
}