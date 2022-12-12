class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
         int k=0;
         vector<int>ans1;
         if(root==NULL) return ans;
         queue<TreeNode*>q;
         q.push(root);
         q.push(NULL);
         while(!q.empty()){
             TreeNode* temp=q.front();
             if(temp==NULL){
                 k++;
              if(k%2==0){
                  reverse(ans1.begin(),ans1.end());
                  ans.push_back({ans1});
              }
              else{
              ans.push_back({ans1});
              }
              ans1.clear();
              q.pop();
              if(!q.empty())
                 q.push(NULL);
             }
             else{
              q.pop();
             ans1.push_back(temp->val);
             if(temp->left)
             q.push(temp->left);
             if(temp->right)
             q.push(temp->right);
             }
         }
         return ans;
    }
};
