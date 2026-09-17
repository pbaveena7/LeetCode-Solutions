class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        int prev = nums[0];
        int prev1 = 0;
        for (int i = 1; i < n - 1; i++) {
            int take = prev1 + nums[i];
            int nottake = prev;
            int curr = max(take,nottake);
            prev1 = prev;
            prev = curr;
        }
   int case1=prev;
    prev =nums[1];
    prev1=0;
   for(int i=2;i<n;i++){
	   int take=prev1+nums[i];
	   int nottake=prev;
	   int curr=max(take,nottake);
	   prev1=prev;
	   prev=curr;
   }
int case2=prev;
return max(case1,case2);

    }
};