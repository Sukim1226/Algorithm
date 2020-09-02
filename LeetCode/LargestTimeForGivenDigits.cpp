#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> A;

int main(void) {
    string ans;
    int H = -1, M = -1;

    for (int i = 0; i < 4; i++) {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    sort(A.begin(), A.end());

    do {
        int h = A[0] * 10 + A[1];
        int m = A[2] * 10 + A[3];

        if (h < 24 && m < 60 ) {
            if (H < h) {
                H = h;
                M = m;
            } else if (H == h) {
                if (M < m) {
                    M = m;
                }
            }
        }

    } while (next_permutation(A.begin(), A.end()));
    
    if (H == -1) {
        return 0;
    }

    ans = (H < 10 ? "0" : "") + to_string(H) + ":" + (M < 10 ? "0" : "") + to_string(M);
    cout << ans << endl;

    return 0;
}