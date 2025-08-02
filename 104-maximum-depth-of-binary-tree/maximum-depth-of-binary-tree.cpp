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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>qe;
        qe.push(root);
        int c=0;
        while(!qe.empty()){
            int len=qe.size();
            for(int i=0;i<len;i++){
                TreeNode* node = qe.front();
                qe.pop();
                if(node->left!=NULL) qe.push(node->left);
                if(node->right!=NULL) qe.push(node->right);
            }
            c++;
        }
        return c;
    }
};