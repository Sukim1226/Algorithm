#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector <string> bi;

void dfs(TreeNode* now, string str) {
    str += to_string(now->val);
    if (now->left != nullptr) {
        dfs(now->left, str);
    }
    if (now->right != nullptr) {
        dfs(now->right, str);
    }
    if (!(now->right || now->left)) {
        bi.push_back(str);
    }
}

int conv(string str) {
    int sum = 0;
    int two = 1;
    int len = str.length();

    for (int i = 0; i < len; i++) {
        sum += two * (str.back() - '0');         
        str.pop_back();
        two *= 2;
    }
    return sum;
}

int main(void) {
    TreeNode* root;
    int ans = 0;
    
    dfs(root, "");
    
    for (int i = 0; i < bi.size(); i++) {
        ans += conv(bi[i]);
    }
    
    cout << ans << endl;

    return 0;
}