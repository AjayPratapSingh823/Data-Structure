class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        int middle=nums.size()/2;
        TreeNode* root= new TreeNode(nums[middle]);
        vector<int>leftint(nums.begin(),nums.begin()+middle);
        vector<int>rightint(nums.begin()+middle+1,nums.end());
        root->left=sortedArrayToBST(leftint);
        root->right=sortedArrayToBST(rightint);
        return root;
    }
};
