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
    void traverse(vector<vector<int>>&nums, TreeNode* root){
          if(root==NULL)return;
          queue<TreeNode*>q;
          nums.push_back({});
          q.push(root);
          q.push(NULL);
          int i=0;
          while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();

            if(curr==NULL){
                if(!q.empty()){
                    nums.push_back({});
                    i++;
                    q.push(NULL);
                    continue;
                }
                break;
            }
            nums[i].push_back(curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
          }
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>>levelorder;
        traverse(levelorder,root);

        int n=levelorder.size()-1;
        return levelorder[n][0];
    }
};