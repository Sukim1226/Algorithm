// 경로 찾기
#include <cstdio>
#include <vector>

using namespace std;

vector<int> adj[105];

int main(void) {
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int tmp;
            scanf("%d", &tmp);

            if (tmp)
                adj[i].push_back(j);
        }
    }


    return 0;
}