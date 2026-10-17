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
    int heightofBT(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftHeight=heightofBT(root->left);
        int rightHeight=heightofBT(root->right);

        return max(leftHeight,rightHeight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        int leftDiameter=diameterOfBinaryTree(root->left);
        int rightDiameter=diameterOfBinaryTree(root->right);

        int passingrootHeight=heightofBT(root->left)+heightofBT(root->right);
        return max(passingrootHeight,max(leftDiameter,rightDiameter));
    }
};