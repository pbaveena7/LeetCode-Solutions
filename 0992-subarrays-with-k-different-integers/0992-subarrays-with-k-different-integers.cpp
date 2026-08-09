class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int n=nums.size();
        int l=0;
        int r=0;
        int maxlen=0;
        map<int,int>mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                 mp[nums[l]]--;
                 if(mp[nums[l]]==0) mp.erase(nums[l]);
                 l++;
            }
            maxlen+=r-l+1;
            r++;
        }
        return maxlen;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};