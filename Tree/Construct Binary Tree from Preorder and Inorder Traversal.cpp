class Solution{
    int preorderIndex;
    map<int,int>inorderindexmap;
    private:
    TreeNode* arrayToTree(vector<int>&preorder,int left,int right){
        if(left > right) return NULL;
        int rootvalue=preorder[preorderIndex++];
        TreeNode* root=new TreeNode(rootvalue);
        root->left=arrayToTree(preorder,left,(inorderindexmap[rootvalue]-1));
        root->right=arrayToTree(preorder,(inorderindexmap[rootvalue]+1),right);
        return root;
    }
    public:
    TreeNode* buildTree(vector<int>&preorder,vector<int>& inorder){
        preorderIndex=0;
        for(int i=0;i<inorder.size();i++){
            inorderindexmap[inorder[i]]=i;//we put the value of inorder in map
        }
        return arrayToTree(preorder,0,preorder.size()-1);
    }
    
};
