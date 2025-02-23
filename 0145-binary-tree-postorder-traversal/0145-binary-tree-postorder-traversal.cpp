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
void pre(vector<int> &order, TreeNode* root){

    if(root == NULL){
        return;
    }

    

    pre(order,root->left);
    pre(order,root->right);

    order.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> order;

         pre(order,root);

        return order;
    }
};