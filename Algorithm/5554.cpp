// 심부름 가는 길
#include <cstdio>

int main(void) {
    int sum, i, tmp;
    
    sum = 0;

    for (i = 0; i < 4; i++) {
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("%d\n", sum / 60);
    printf("%d\n", sum % 60);

    return 0;
}