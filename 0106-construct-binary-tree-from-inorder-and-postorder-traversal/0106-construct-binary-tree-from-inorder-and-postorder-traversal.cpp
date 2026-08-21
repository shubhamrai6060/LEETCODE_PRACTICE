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

    TreeNode* solve(vector<int>& inorder,
                    vector<int>& postorder,
                    unordered_map<int, int>& mp,
                    int& postIndex,
                    int left,
                    int right) {

        if (left > right) {
            return NULL;
        }

     
        int rootValue = postorder[postIndex];
        postIndex--;

        TreeNode* root = new TreeNode(rootValue);

     
        int mid = mp[rootValue];

     
        root->right = solve(inorder, postorder, mp,
                            postIndex, mid + 1, right);

     
        root->left = solve(inorder, postorder, mp,
                           postIndex, left, mid - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder,
                        vector<int>& postorder) {

        unordered_map<int, int> mp;

       
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        int postIndex = postorder.size() - 1;

        return solve(inorder, postorder, mp,
                     postIndex, 0, inorder.size() - 1);
    }
};