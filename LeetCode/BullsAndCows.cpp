#include <iostream>
#include <string>

using namespace std;

int s[10];
int g[10];

int main(void) {
    string secret, guess;
    int len;
    int A, B;

    cin >> secret >> guess;

    len = secret.length();

    for (int i = 0; i < len; i++) {
        s[secret[i] - '0']++;
    }
     
    A = B = 0;
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess[i]) {
            A++;
            s[guess[i] - '0']--;
        } else {
            g[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (s[i] && g[i]) {
            B += s[i] < g[i] ? s[i] : g[i];
        }
    }

    cout << A << "A" << B << "B" << endl;

    return 0;
}