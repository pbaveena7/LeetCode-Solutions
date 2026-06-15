class Solution {
public:
    int possible(vector<int>& nums, int k,long long mid){
        int cnt=1;
        int sum=0;
        for(int x:nums){
            if(sum+x<=mid){
              
                sum+=x;
            }else{
                cnt++;
                sum=x;
            }
        }
        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        long low=*max_element(nums.begin(),nums.end());
        long high=accumulate(nums.begin(),nums.end(),0);
        long long ans=high;
        while(low<=high){
            long mid=(low+high)/2;
            if(possible(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};