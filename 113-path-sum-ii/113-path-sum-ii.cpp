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
    void helper(TreeNode* root,int target,vector<vector<int>> &ans,vector<int> &temp)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            {
                target=target-root->val;
                temp.push_back(root->val);
                // cout<<target<<" ";
                if(target==0)
                    ans.push_back(temp);
            temp.pop_back();
            return;
            }
        temp.push_back(root->val);
        helper(root->left,target-root->val,ans,temp);
        helper(root->right,target-root->val,ans,temp);
        temp.pop_back();
        
        return;
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        helper(root,targetSum,ans,temp);
        
        return ans;
    }
};