#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> ans;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void dfs(TreeNode* n) {
    if (n->left != nullptr) {
        ans.push_back(n->left->val);
        dfs(n->left);
    }
    if (n->right != nullptr) {
        ans.push_back(n->right->val);
        dfs(n->right);
    }
}

int main(void) {
    TreeNode *root1, *root2;

    if (root1 != nullptr) {
        ans.push_back(root1->val);
        dfs(root1);
    }
    
    if (root2 != nullptr) {
        ans.push_back(root2->val);
        dfs(root2);
    }
    
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}