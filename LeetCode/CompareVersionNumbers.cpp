#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> v1;
vector <string> v2;

int cmp(int i) {
    int len1 = v1[i].length();
    int len2 = v2[i].length();
 
    if (len1 < len2) {
        return -1;
    } else if (len2 < len1) {
        return 1;
    } else {
        for (int j = 0; j < len1; j++) {
            if (v1[i][j] < v2[i][j]) {
                return -1;
            } else if (v2[i][j] < v1[i][j]) {
                return 1;
            }
        }
        return 0;
    }

}

int main(void) {
    string version1, version2;

    cin >> version1 >> version2;

    version1 += ".";
    version2 += ".";

    for (int i = 0, found = version1.find('.'); found != string::npos; i = found + 1, found = version1.find('.', found + 1)) {
        string token = version1.substr(i, found - i);
        for (int len = token.length(); token[0] == '0' && (len - 1); token.erase(0, 1), len--);
        v1.push_back(token);
    }
    
    for (int i = 0, found = version2.find('.'); found != string::npos; i = found + 1, found = version2.find('.', found + 1)) {
        string token = version2.substr(i, found - i);
        for (int len = token.length(); token[0] == '0' && (len - 1); token.erase(0, 1), len--);
        v2.push_back(token);
    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    } cout << endl;

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    } cout << endl;

    if (v1.size() < v2.size()) {
        for (int i = v1.size(); i < v2.size(); i++) {
            v1.push_back("0");
        }
    } else {
        for (int i = v2.size(); i < v1.size(); i++) {
            v2.push_back("0");
        }
    }

    int ans = 0;
    for (int i = 0; i < v1.size(); i++) {
        ans = cmp(i);
        if (ans) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}