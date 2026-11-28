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
    void levelorder(vector<vector<int>>&traversal,TreeNode* root){
        if(root==NULL)return;
        queue<TreeNode*>q;
        traversal.push_back({});
        q.push(root);
        q.push(NULL);
        int i=0;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();

            if(temp==NULL){
                if(!q.empty()){
                    traversal.push_back({});
                    q.push(NULL);
                    i++;
                    continue;
                }
                else break;
            }
            traversal[i].push_back(temp->val);
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
    int maxi(vector<int>&nums){
        int maximumVal=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maximumVal)maximumVal=nums[i];
        }
        return maximumVal;
    }
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>>traversal;
        levelorder(traversal,root);
        vector<int>result;
        int n=traversal.size();
        for(int i=0; i<n; i++){
            int maxVal=maxi(traversal[i]);
            result.push_back(maxVal);
        }
        return result;
    }
};