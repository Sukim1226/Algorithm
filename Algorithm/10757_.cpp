// Å« ¼ö A+B
#include <iostream>
#include <string>

using namespace std;

string A, B;
int lenA, lenB;

void Add(void);

int main(void) {
    cin >> A >> B;

    lenA = A.length();
    lenB = B.length();

    if (lenA < lenB) {
        A.swap(B);
    }

    Add();

    return 0;
}

void Add(void) {
    int i, j, k;
    int a, b, sum, carry;
    char num;
    string ans = "";

    i = lenA - 1;
    j = lenB - 1;
    k = 0;
    carry = 0;

    for (; j >=0; i--, j--, k++) {
        a = A[i] - '0';
        b = B[j] - '0';      
        sum = a + b + carry;

        if (sum >= 10) {
            sum = sum % 10;
            carry = 1;
        } else {
            carry = 0;
        }

        num = sum + '0';

        ans.push_back(num);
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

        num = sum + '0';

        ans.push_back(num);
    }

    ans.push_back('\0');

    cout << ans << endl;


}