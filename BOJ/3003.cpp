// Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù
#include <cstdio>

int main(void) {
    int chess[] = { 1, 1, 2, 2, 2, 8 };
    int i, tmp;

    for (i = 0; i < 6; i++) {
        scanf("%d", &tmp);
        printf("%d ", chess[i] - tmp);
    }

    return 0;
}