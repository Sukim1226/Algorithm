// Å« ¼ö A+B
#include <cstdio>
#include <cstring>

char A[10005];
char B[10005];
char ans[10005];

int lenA, lenB;


void Init(char * a, char * b);
void Add(void);
//void Sub(char * a, char * b);
//void Mul(char * a, char * b);

int main(void) {
    scanf("%s %s", A, B);
    Init(A, B);
    Add();
    
    
    //printf("%s %s", A, B);
    
    return 0;
}

void Init(char * a, char * b) {
    int i, tmp;
    char c;

    lenA = strlen(A);
    lenB = strlen(B);
    
    if (lenB > lenA) {
        for (i = 0; i < lenB; i++) {
            c = *(a + i);
            *(a + i) = *(b + i);
            *(b + i) = c;   
        }
        
        tmp = lenA;
        lenA = lenB;
        lenB = tmp;

    }

}

void Add(void) {
    int i, j, k;
    int a, b, sum, carry;

    i = lenA - 1;
    j = lenB - 1;
    k = 0;
    carry = 0;

    for (; j >= 0; i--, j--, k++) {
        a = A[i] - '0'; 
        b = B[j] - '0';      
        sum = a + b + carry;

        if (sum >= 10) {
            sum = sum % 10;
            carry = 1;
        } else {
            carry = 0;
        }

        ans[k] = sum + '0';

    }

    for (; i >= 0; i--, k++) {
        a = A[i] - '0';
        sum = a + carry;

        if (sum >= 10) {
            sum = sum % 10;
            carry = 1;
        } else {
            carry = 0;
        }

        ans[k] = sum + '0';
    }

    ans[k] = '\0';

    //strrev(ans);
    //printf("%s", ans);

    for (k -= 1; k >= 0; k--) {
        printf("%c", ans[k]);
    }
}