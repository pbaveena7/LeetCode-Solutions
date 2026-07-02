class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
     int jump=0;
     int l=0;
     int r=0;
     while(r<n-1){
        int far=0;
        for(int ind=l;ind<=r;ind++){
            far=max(ind+nums[ind],far);
        }
        l=r+1;
        jump=jump+1;
        r=far;
     }
     return jump;
    }
};
