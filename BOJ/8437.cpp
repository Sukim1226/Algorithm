// Julka
#include <cstdio>

int main(void) {
    int A, K; // Input : 10^100

    scanf("%d %d", &A, &K);
    printf("%d\n", (A + K) / 2);
    printf("%d\n", (A - K) / 2);

    return 0;
}