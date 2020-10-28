#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

vector <vector<int>> ans;
vector <set<int>> tmp;

void bt(int k, int n, string str) {
    if (k == 0 && n == 0) {
        vector <int> tmp;
        for (int i = 0; i < str.length(); i++) {
            tmp.push_back(str[i] - '0');
        }
        ans.push_back(tmp);
    } else if (n <= 0) {
        return ;
    }

    for (int i = str[str.length() - 1] - '0'; i <= 9; i++) {
        if (str.find(i + '0') != string::npos) continue;
        bt(k - 1, n - i, str + to_string(i));
    }
}

int main(void) {
    int k, n;
    cin >> k >> n;

    for (int i = 1; i <= 7; i++)
        bt(k - 1, n - i, to_string(i));

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        } cout << endl;
    }

    return 0;
}