class Solution {
public:
    void helper(int ind,vector<int>& temp,vector<vector<int>>& ans,int target,vector<int>& candidates){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(ind == candidates.size()) return ;
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            helper(ind,temp,ans,target-candidates[ind],candidates);
            temp.pop_back();
        }
        helper(ind+1,temp,ans,target,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
         helper(0,temp,ans,target,candidates);
         return ans;
    }
};