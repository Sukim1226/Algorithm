// 파티가 끝나고 난 뒤
#include <cstdio>

int main(void) {
    int L, P;
    int attendee, i, tmp;

    scanf("%d %d", &L, &P);
    
    attendee = L * P;

    for (i = 0; i < 5; i++) {
        scanf("%d", &tmp);
        printf("%d ", tmp - attendee);
    }

    return 0;
}