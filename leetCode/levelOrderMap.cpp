/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void levelOrderMap(TreeNode* root, map<int, vector<int>>& levelMap, int level) {
        if (root == NULL) return;

        levelMap[level].push_back(root->val);
        levelOrderMap(root->left, levelMap, level + 1);
        levelOrderMap(root->right, levelMap, level + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int, vector<int>> levelMap;
        levelOrderMap(root, levelMap, 0);
        
        vector<vector<int>> result;
        for (const auto& [k, v] : levelMap) {
            result.push_back(v);
        }
        return result;
    }
};