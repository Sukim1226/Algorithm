// 달달함이 넘쳐흘러
#include <cstdio>

int main(void) {
    int ax, ay, az;
    int bx, by, bz;
    int cx, cy, cz;

    scanf("%d %d %d", &ax, &ay, &az);
    scanf("%d %d %d", &cx, &cy, &cz);

    // a CAKE b = c = (a.z + b.x, a.y * b.y, a.x + b.z)
    bx = cx - az;
    by = cy / ay;
    bz = cz - ax;

    printf("%d %d %d\n", bx, by, bz);

    return 0;
}