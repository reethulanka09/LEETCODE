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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>qe;
        qe.push(root);
        vector<double>vec;
        while(!qe.empty()){
            int l=qe.size();
            vector<int>ans;
            double s=0;
            for(int i=0;i<l;i++){
                TreeNode* node = qe.front();
                qe.pop();
                if(node->left!=NULL) qe.push(node->left);
                if(node->right!=NULL) qe.push(node->right);
                ans.push_back(node->val);
            }
            for(auto i:ans){
                s+=i;
            }
            vec.push_back(s/l);
        }
        return vec;
    }
};