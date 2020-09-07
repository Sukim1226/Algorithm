#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

map <char, string> symbol;
map <string, char> word;

int main(void) {
    string pattern, str;
    bool ans = true;

    cin >> pattern >> str;
    str += "_";
    //getline(cin, str);

    for (int i = 0; i < pattern.length(); i++) {
        int idx = str.find('_');

        if (idx == string::npos) {
            ans = false;
            break;
        }

        string token = str.substr(0, idx);
        str = str.substr(idx + 1, str.length() - idx - 1);

        cout << i << "th iteration token : " << token << " string : " << str << endl;

        if (symbol.find(pattern[i]) != symbol.end()) {
            if (symbol[pattern[i]] != token || word[token] != pattern[i]) {
                ans = false;
                break;
            }
        } else {
            if (word.find(token) != word.end()) {
                ans = false;
                break;
            }
            symbol[pattern[i]] = token;
            word[token] = pattern[i];
        }
    }

    if (str.find('_') != string::npos) {
        ans = false;
    }

    cout << ans << endl;

    return 0;
}