// 이상한 기호
#include <cstdio>

int main(void) {
    long long A, B;
    long long sum;

    scanf("%lld %lld", &A, &B);
    sum = (A + B) * (A - B);
    printf("%lld", sum);

    return 0;
}