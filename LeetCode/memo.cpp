#include <cstdio>

int main(void) {
    double a = 123.456E+11;
    double b = 123.456e+22;
    long double c = 123.456E+3l;
    long double d = 123.456e+22l;
    long double e = 123.456e+111l;

    printf("%e %e\n", a, b);
    printf("%E %E\n", a, b);
    printf("%Le %Le %Le\n", c, d, e);
    printf("%LE %LE %LE\n", c, d, e);

    return 0;
}