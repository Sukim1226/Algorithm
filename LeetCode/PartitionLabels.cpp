#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

map <char, int> last;
vector <int> ans;

int main(void) {
    string S;
    
    cin >> S;

    for (char i = 'a'; i <= 'z'; i++) {
        int idx = S.find_last_of(i);
        if (idx != string::npos) {
            last[i] = idx;
        }
    }

    int psize = 0;
    int sum = 0;

    for (int i = 0; i < S.length(); i++) {
        if (last.count(S[i]) > 0 && last[S[i]] > psize) {
            psize = last[S[i]];
        }
        if (psize == i) {
            ans.push_back(psize + 1 - sum);
            sum = psize + 1;
        }
    }
        
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    /* 컴지 해설
    int min_pos[26], max_pos[26];   // 각 문자의 최소위치, 최대위치
    for (int i = 0; i < 26; i++) {
        min_pos[i] = 500;
        max_pos[i] = -1;
    }

    for (int i = 0; i < S.length(); i++) {
        min_pos[S[i] - 'a'] = min(min_pos[S[i] - 'a'], i);
        max_pos[S[i] - 'a'] = max(min_pos[S[i] - 'a'], i);
    }
    
    vector<pair<int, int>> v;
    vector<int> ans;
    // 한번이라도 등장한 문자의 최소위치와 최대위치를 벡터에 넣음
    for (int i = 0; i < 26; i++)
        if (max_pos[i] != -1)
            v.emplace_back(min_pos[i], max_pos[i]);

        // 정렬
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        int min_idx = v[i].first;
        int max_idx = v[i].second;
        // 현재 구간의 끝보다, 다음 구간의 시작이 같거나 작으면 두 구간을 합침.
        while (i + 1 < v.size() && v[i + 1].first <= max_idx) {
            max_idx = max(max_idx, v[++i].second);
        }
        ans.push_back(max_idx - min_idx + 1);
    }
    */

    return 0;
}