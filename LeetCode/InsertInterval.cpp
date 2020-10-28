#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector<int>> intervals;
vector <int> newInterval;
vector <vector<int>> ans;

int main(void) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b;
        vector<int> tmp;
        cin >> a >> b;
        tmp.push_back(a);
        tmp.push_back(b);

        intervals.push_back(tmp);
    }

    {
        int a, b;
        cin >> a >> b;
        newInterval.push_back(a);
        newInterval.push_back(b);
    }

    bool insert = false;
    int i = 0;
    while (i < intervals.size()) {
        if ((intervals[i][0] <= newInterval[0] && newInterval[0] <= intervals[i][1])
            || (intervals[i][0] <= newInterval[1] && newInterval[1] <= intervals[i][1])) {
            cout << intervals[i][0] << " " << intervals[i][1] << " / " << newInterval[0] << " " << newInterval[1] << endl;
            vector <int> tmp;
            tmp.push_back(min(intervals[i][0], newInterval[0]));
            
            int end;
            for ( ; i < intervals.size(); ) {
                if (intervals[i][1] < newInterval[1]) i++;
                else if (intervals[i][0] <= newInterval[1] && newInterval[1] <= intervals[i][1]) {
                    tmp.push_back(intervals[i][1]);
                    break;
                } else {
                    tmp.push_back(newInterval[1]);
                    break;
                }
            }
            insert = true;
            ans.push_back(tmp);
            
        } else {
            ans.push_back(intervals[i]);
        }
        i++;
    }

    if (!insert) {
        ans.push_back(newInterval);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " ~ " << ans[i][1] << endl;
    }

    return 0;
}