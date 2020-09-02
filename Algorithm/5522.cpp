// 카드 게임
#include <cstdio>

int main(void) {
    int sum, i, tmp;

    sum = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("%d", sum);

    return 0;
}