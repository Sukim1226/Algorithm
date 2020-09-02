// 비밀번호 찾기
//#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> account;

void init() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(void) {
    init();
    int N, M, i, j;
    //char addr[24];
    //char pwd[24];
    //scanf("%d %d", &N, &M);

    cin >> N >> M;

    for (i = 0; i < N; i++) {
        //scanf("%s", addr);
        //scanf("%s", pwd);
        string addr, pwd;
        cin >> addr >> pwd;
        account.insert({addr, pwd});
    }

    for (i = 0; i < M; i++) {
        //scanf("%s", addr);
        string addr;
        cin >> addr;
        cout << account[addr] << "\n";
    }

    return 0;
}