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
    void check(TreeNode* root,stack<int>&st){
        if(root==NULL) return;
        check(root->right,st);
        st.push(root->val);
        check(root->left,st);

    }
    TreeNode* increasingBST(TreeNode* root) {
        stack<int>st;
        TreeNode* newRoot = NULL;
        TreeNode* curr = NULL;

        check(root,st);
        while(!st.empty()){
            int value = st.top();
            st.pop();
            TreeNode* newNode=new TreeNode(value);

            if(newRoot==NULL){
                newRoot=newNode;
                curr=newNode;

            }
            else{
                curr->right=newNode;
                curr=newNode;
            }

        }
        return newRoot;
        
    }
};