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
    void search(vector<int>inorder,vector<int>&left,vector<int>&right,int val){
        int found=0;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]!=val && found==0){
                left.push_back(inorder[i]);
            }
            else if(inorder[i]==val){
                found=1;
            }
            else{
                right.push_back(inorder[i]);
            }
        }
    } 


    TreeNode* build(vector<int>& inorder, vector<int> postorder){

        if(inorder.size()==0) return NULL; 
        vector<int>left;
        vector<int>right;
        int n=postorder.size();
        int val=postorder[n-1];

        

        TreeNode* root=new TreeNode(val); 

        search(inorder,left,right,val); 
        postorder.pop_back();

        vector<int> leftpostorder;
        vector<int> rightpostorder;

        for(int i=0;i<left.size();i++){
            leftpostorder.push_back(postorder[i]);
        }
        for(int i=left.size();i<postorder.size();i++){
            rightpostorder.push_back(postorder[i]);
        }
        root->left=build(left,leftpostorder);
        root->right=build(right,rightpostorder);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        return build(inorder,postorder); 

    }
};