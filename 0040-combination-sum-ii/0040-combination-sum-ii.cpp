class Solution {
public:
    void helper(int ind,vector<vector<int>>& ans ,vector<int>& temp,vector<int>& arr,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i> ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            temp.push_back(arr[i]);
            helper(i+1,ans,temp,arr,target-arr[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        vector<vector<int>>ans;
        helper(0,ans,temp,candidates,target);
        return ans;
    }
};