// ���������� �Ϸ��µ� ������ �������
#include <cstdio>

int main(void) {
    int L, t;

    scanf("%d", &L);

    t = L / 5 + (L % 5 ? 1 : 0);    

    printf("%d", t);

    return 0;
}