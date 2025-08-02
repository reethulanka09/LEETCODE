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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*>qe;
        qe.push(root);
        vector<int>ans;
        while(!qe.empty()){
            int len=qe.size();
            vector<int>vec;
            for(int i=0;i<len;i++){
                TreeNode* node=qe.front();
                qe.pop();
                vec.push_back(node->val);
                if(node->left!=NULL) qe.push(node->left);
                if(node->right!=NULL) qe.push(node->right);
            }
            ans.push_back(vec[vec.size()-1]);
        }
        return ans;
    }
};