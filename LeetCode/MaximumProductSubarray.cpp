#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nums;

int main(void) {
    int N;
    int MAX;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }

    MAX = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        int sum = nums[i];
        MAX = max(MAX, nums[i]);
        for (int j = i + 1; j < nums.size(); j++) {
            sum *= nums[j];
            MAX = max(MAX, sum);
            if (sum == 0) break;
        }
    }

    cout << MAX << endl;

    return 0;
}