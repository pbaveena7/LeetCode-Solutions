class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest=nums[0];
        int smallest=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest)
            largest=nums[i];
            else if(nums[i]<smallest)
            smallest=nums[i];
        }
        int gcd=1;
        for(int i=1;i<=smallest;i++){
            if(largest%i==0 && smallest%i==0)
            {
                gcd=i;
            }
        }
        return gcd;
    }
};