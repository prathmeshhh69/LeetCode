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
    void levelordertraversal(vector<vector<int>>& nums, TreeNode* root){
        if(root==NULL)return;
       queue<TreeNode*>q;
       q.push(root);
       q.push(NULL);
       nums.push_back({});
       int i=0,j=0;
       while(q.size() > 0){
        TreeNode* temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
                nums.push_back({});
                i++;
                continue;
            }
            else break;
        }
        nums[i].push_back(temp->val);
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        
       }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        levelordertraversal(result,root);
        return result;
    }
};