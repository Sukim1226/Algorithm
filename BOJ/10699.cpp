// ¿À´Ã ³¯Â¥
#include <cstdio>
#include <ctime>

int main(void) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("%d-%d-%d", tm.tm_year + 1900, 
        tm.tm_mon + 1, tm.tm_mday);

    return 0;
}