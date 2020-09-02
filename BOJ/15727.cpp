// 조별과제를 하려는데 조장이 사라졌다
#include <cstdio>

int main(void) {
    int L, t;

    scanf("%d", &L);

    t = L / 5 + (L % 5 ? 1 : 0);    

    printf("%d", t);

    return 0;
}