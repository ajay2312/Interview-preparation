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
    
    bool check(TreeNode *t1,TreeNode* t2){
        if(t1==NULL && t2==NULL)
            return true;
        else if(t1==NULL || t2==NULL)
            return false;
        if(t1->val!=t2->val)
            return false;
        return (check(t1->left,t2->right) && check(t1->right,t2->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);   
    }
};