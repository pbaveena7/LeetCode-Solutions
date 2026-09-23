class Solution {
public:
    void subsuq(int ind,int n,vector<int>& ans,vector<vector<int>>&res,vector<int>& nums){
        if(ind>=n){
            res.push_back(ans);
            return ;
        }
        ans.push_back(nums[ind]);
        subsuq(ind+1,n,ans,res,nums);
        ans.pop_back();
        subsuq(ind+1,n,ans,res,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>res;
        int n=nums.size();
        subsuq(0,n,ans,res,nums);
        return res;
    }
};