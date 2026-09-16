class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        int prev=nums[0];
        int  prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i]+prev2;
            int nottake=prev;
            int curr=max(take,nottake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};