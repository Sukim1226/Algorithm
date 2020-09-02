// 나는 행복합니다~
#include <cstdio>

int main(void) {
    int N, M, K, x, y;
    
    scanf("%d %d %d", &N, &M, &K);

    x = K / M;
    y = K % M;

    printf("%d %d", x, y);

    return 0;
}