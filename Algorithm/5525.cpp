// IOIOI
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int N, M;
    string s;
    int cnt = 0;
    string Pn = "I";

    cin >> N >> M;
    cin >> s;

    for (auto i = 0; i < N; i++) {
        Pn += "OI";
    }

    cout << Pn << "----------" << endl;


    for (int i = 0; i < M; ) {
        size_t idx = s.find(Pn, i);
        cout << "idx : " << idx << "\ti : " << i << "\tcnt : " << cnt << endl;
        if (idx == string::npos) {
            break;
        } else {
            i = (int)idx + 2;
            if (i < M) {
                //cout << "after idx : " << idx << "\tafter i : " << i << endl;           
                cout << s.substr(i, s.length() - i) << endl;
            }
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}