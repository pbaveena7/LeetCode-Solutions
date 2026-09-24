class Solution {
public:
int digi(int n){
    int temp=0;
    while(n){
        temp+=n%10;
        n/=10;
    }
    return temp;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
             int sum=digi(nums[i]);
            if(i==sum)
            return i;
        }
        return -1;
    }
};