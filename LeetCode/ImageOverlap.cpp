#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> A[30];
vector <int> B[30];

int main(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int tmp;
            cin >> tmp;
            A[i].push_back(tmp);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int tmp;
            cin >> tmp;
            B[i].push_back(tmp);
        }
    }

    int MAX = -1, v = -1, h = -1;
    int size = A[0].size();
    
    

    cout << MAX << endl;

    return 0;
}