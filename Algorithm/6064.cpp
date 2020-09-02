// Ä«À× ´Þ·Â
#include <cstdio>

int gcd(int a, int b) {
    return a % b ? gcd(b, a % b) : b;
}

void process(void) {
    int M, N, x, y;
    int common;

    scanf("%d %d", &M, &N);
    scanf("%d %d", &x, &y);

    common = M * N / gcd(M, N);

    while (x <= common) {
        if (x % N == y % N) {
            printf("%d\n", x);
            break;
        } else {
            x += M;
        }
    }

    if (x > common) {
        printf("-1\n");
    }

}


int main(void) {
    int T;
    scanf("%d", &T);
    while (T--) {
        process();
    }

    return 0;
}